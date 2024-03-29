/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:54:24 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:51:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructer called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Dog destructer called" << std::endl;
}

Dog::Dog( Dog const & src)
{
	std::cout << "Dog copy constructer called" << std::endl;
	*this = src;
}

Dog & Dog::operator=( Dog const & rhs)
{
	std::cout << "Dog overloaded operator = called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "barks" << std::endl;
}