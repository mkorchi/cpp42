/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:44:11 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 15:44:45 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "Animal constucter called" << std::endl;
	this->_type = "unknown entity";
}

AAnimal::~AAnimal( void )
{
	std::cout << "Animal destructer called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src)
{
	std::cout << "Animal copy constucter called" << std::endl;
	*this = src;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs)
{
	std::cout << "Animal overloaded operator = called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string	AAnimal::getType( void ) const
{
	return this->_type;
}
