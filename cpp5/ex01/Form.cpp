/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:15:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 18:01:47 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{ }


Form::Form( void )
	: _name("form1"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}



Form::~Form( void )
{

}

Form::Form( Form const & src)
	: _name("form"),  _gradeToSign(150), _gradeToExecute(150)
{
	*this = src;
}

Form & Form::operator=( Form const & rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

std::string	Form::getName( void ) const
{
	return this->_name;
}

bool		Form::getSigned( void ) const
{
	return this->_signed;
}

int			Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int		Form::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}

void		Form::beSigned(Bureaucrat const &	 b)
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