/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:55:58 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 21:16:07 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: AForm("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("ShrubberyCreation", 145, 137)
{
	this->_target = "default";
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->preExecute(executor))
	{
		//to do
		std::cout << "executing ShrubberyCreationForm" << std::endl;
	}
}

