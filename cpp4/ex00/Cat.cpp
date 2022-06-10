/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:32:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:51:18 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructer called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << "Cat destructer called" << std::endl;
}

Cat::Cat( Cat const & src)
{
	std::cout << "Cat copy constructer called" << std::endl;
	*this = src;
}

Cat & Cat::operator=( Cat const & rhs)
{
	std::cout << "Cat overloaded operator = called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "meows" << std::endl;
}