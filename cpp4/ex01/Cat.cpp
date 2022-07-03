/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:32:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:39:13 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructer called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat( void )
{
	std::cout << "Cat destructer called" << std::endl;
	delete this->_brain;

}

Cat::Cat( Cat const & src)
{
	std::cout << "Cat copy constructer called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(*src._brain);

}

Cat & Cat::operator=( Cat const & rhs)
{
	std::cout << "Cat overloading operator = called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "meows" << std::endl;
}

Brain *Cat::getBrain( void )
{
	return this->_brain;
}
