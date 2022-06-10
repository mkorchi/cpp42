/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:27:18 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:51:28 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat constructer called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructer called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src)
{
	std::cout << "WrongCat copy constructer called" << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs)
{
	std::cout << "Cat overloaded operator = called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "meows" << std::endl;
}