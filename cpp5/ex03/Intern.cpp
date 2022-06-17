/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:00:08 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 16:06:59 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"


Intern::Intern( void )
{
	this->forms[0] = "ShrubberyCreation";
	this->forms[1] = "RobotomyRequestForm";
	this->forms[2] = "PresidentialPardonForm";
}

Intern::~Intern( void )
{
	
}

Intern::Intern( Intern const & src)
{
	
}

Intern & Intern::operator=( Intern const & rhs)
{
	
}

AForm*	makeForm(std::string formName, std::string target)
{
	AForm *form;


	return form;
}
