/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:19:28 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:27:29 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void )
{
	std::cout << "Animal constucter called" << std::endl;
	this->_type = "unknown entity";
}

Animal::~Animal( void )
{
	std::cout << "Animal destructer called" << std::endl;
}

Animal::Animal( Animal const & src)
{
	std::cout << "Animal copy constucter called" << std::endl;
	*this = src;
}

Animal & Animal::operator=( Animal const & rhs)
{
	std::cout << "Animal overloarding operator = called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
}