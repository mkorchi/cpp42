/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:25:58 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:51:26 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructer called" << std::endl;
	this->_type = "unknown entity";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructer called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constucter called" << std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal overloaded operator = called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
}