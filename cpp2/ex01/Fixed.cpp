/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:03:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/03 19:09:56 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_nBits = 8;

Fixed::Fixed( void ) {
	std::cout << "Default constructer called" << std::endl;
	this->_integer = 0;
}

Fixed &	Fixed::operator=( Fixed const & fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &fixed)
		this->_integer = fixed.getRawBits();
	return *this;
}

#define FRACT_BITS 8
#define FIXED_POINT_ONE (1 << FRACT_BITS)
#define MAKE_INT_FIXED(x) ((x) << FRACT_BITS)
#define MAKE_FLOAT_FIXED(x) ((int_fixed)((x) * FIXED_POINT_ONE))
#define MAKE_FIXED_INT(x) ((x) >> FRACT_BITS)
#define MAKE_FIXED_FLOAT(x) (((float)(x)) / FIXED_POINT_ONE)

float	Fixed::toFloat( void ) const {
	return ((float) (this->_integer)) / this->_nBits;
}

int		Fixed::toInt( void ) const {
	return this->_integer >> Fixed::_nBits;
}

Fixed::Fixed( const int number) {
	this->_integer = 1 << number;
}

Fixed::Fixed( const float number) {
	this->_integer = number * (1 << Fixed::_nBits);
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
	return this->_integer;
}

void	Fixed::setRawBits( int const raw) {
	this->_integer = raw;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i ) {
	o  << "" << i.getRawBits();
	return o;
}