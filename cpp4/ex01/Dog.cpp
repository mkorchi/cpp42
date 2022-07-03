/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:54:24 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:39:02 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructer called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog( void )
{
	std::cout << "Dog destructer called" << std::endl;
	delete this->_brain;
}

Dog::Dog( Dog const & src)
{
	std::cout << "Dog copy constructer called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(*src._brain);
}

Dog & Dog::operator=( Dog const & rhs)
{
	std::cout << "Dog overloaded operator = called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "barks" << std::endl;
}

Brain *Dog::getBrain( void )
{
	return this->_brain;
}