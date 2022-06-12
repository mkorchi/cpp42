/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:03:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/11 13:41:30 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::_nBits = 8;

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructer called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const {
	return (((float) (this->_value)) / (1 << this->_nBits));
}

int		Fixed::toInt( void ) const {
	return this->_value >> Fixed::_nBits;
}

Fixed::Fixed( const int number) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = number << Fixed::_nBits;
}

Fixed::Fixed( const float number) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(((number) * (1 << Fixed::_nBits)));
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return this->_value;
}

void	Fixed::setRawBits( int const raw) {
	this->_value = raw;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i ) {
	o  << "" << i.toFloat();
	return o;
}
