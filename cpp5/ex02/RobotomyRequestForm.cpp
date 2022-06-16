/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:13:57 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 21:16:16 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "target";
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->preExecute(executor))
	{
		//to do
		std::cout << "executing RobotomyRequestForm" << std::endl;
	}
}