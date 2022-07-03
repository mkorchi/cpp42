/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:00:08 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/03 13:05:38 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern( void )
{
	
}

Intern::~Intern( void )
{
	
}

Intern::Intern( Intern const & src)
{
	*this = src;
}

Intern & Intern::operator=( Intern const & rhs)
{
	(void) rhs;
	return *this;
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	AForm* (Intern::*fun[4])( std::string ) = {&Intern::_makeShrubberyCreation, &Intern::_makeRobotomyRequest, &Intern::_makePresidentialPardon};
	std::string forms[4] = {"ShrubberyCreation", "RobotomyRequestForm", "PresidentialPardonForm"};
	

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << forms[i] << std::endl;
			return (this->*(fun[i]))(target);
		}
	}
	std::cout << "Form not found" << std::endl;
	return (NULL);
}

AForm*	Intern::_makeRobotomyRequest( std::string target )
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::_makeShrubberyCreation( std::string target )
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::_makePresidentialPardon( std::string target )
{
	return new PresidentialPardonForm(target);
}
