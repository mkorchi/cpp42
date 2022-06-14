/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:56:55 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 18:57:18 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{ }


AForm::AForm( void )
	: _name("form1"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}



AForm::~AForm( void )
{

}

AForm::AForm( AForm const & src)
	: _name("form"),  _gradeToSign(150), _gradeToExecute(150)
{
	*this = src;
}

AForm & AForm::operator=( AForm const & rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

std::string	AForm::getName( void ) const
{
	return this->_name;
}

bool		AForm::getSigned( void ) const
{
	return this->_signed;
}

int			AForm::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int		AForm::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}

void		AForm::beSigned(Bureaucrat const &	 b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
	}
	else
	{
		throw Bureaucrat::GradeTooLowException();
	}
}