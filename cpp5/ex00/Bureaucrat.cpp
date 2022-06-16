/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 08:03:39 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 16:56:04 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( void )
	: _name("unnamed"), _grade(150) {}

Bureaucrat::~Bureaucrat( void )
{
	
}

Bureaucrat::Bureaucrat( Bureaucrat const & src)
	: _name(src._name)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->_grade++;
}

std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i)
{
	o  <<  i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade Too Low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade Too High";
}