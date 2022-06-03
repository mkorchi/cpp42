/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:03:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/03 18:57:31 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_nBits = 8;

Fixed::Fixed( void ) {
	std::cout << "Default constructer called" << std::endl;
	this->_number = 0;
}

Fixed &	Fixed::operator=( Fixed const & fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &fixed)
		this->_number = fixed.getRawBits() << 8;
	return *this;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_number << 8;
}

void	Fixed::setRawBits( int const raw) {
	this->_number = raw >> 8;
}