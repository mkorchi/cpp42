/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:03:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 15:55:23 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::_nBits = 8;

Fixed::Fixed( void ) : _value(0)
{}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const
{
	return (((float) (this->_value)) / (1 << this->_nBits));
}

int		Fixed::toInt( void ) const
{
	return this->_value >> Fixed::_nBits;
}

Fixed::Fixed( const int number)
{
	this->_value = number << Fixed::_nBits;
}

Fixed::Fixed( const float number)
{
	this->_value = roundf(((number) * (1 << Fixed::_nBits)));
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
}

Fixed::~Fixed( void ) {
}

int	Fixed::getRawBits( void ) const
{
	return this->_value;
}

void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o  << "" << i.toFloat();
	return o;
}

bool	Fixed::operator>( Fixed const & fixed)
{
	return (this->_value > fixed.getRawBits());
}

bool	Fixed::operator<( Fixed const & fixed)
{
	return (this->_value < fixed.getRawBits());		
}

bool	Fixed::operator>=( Fixed const & fixed)
{
	return this->_value >= fixed.getRawBits();
}

bool	Fixed::operator<=( Fixed const & fixed)
{
	return this->_value <= fixed.getRawBits();
}

bool	Fixed::operator==( Fixed const & fixed)
{
	return this->_value == fixed.getRawBits();
}

bool	Fixed::operator!=( Fixed const & fixed)
{
	return this->_value != fixed.getRawBits();
}

Fixed	Fixed::operator+( Fixed const & fixed)
{
	Fixed res(this->toFloat() + fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator-( Fixed const & fixed)
{
	Fixed res(this->toFloat() - fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator*( Fixed const & fixed)
{
	Fixed res(this->toFloat() * fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator/( Fixed const & fixed)
{
	Fixed res(this->toFloat() / fixed.toFloat());
	return (res);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a._value < b._value)
		return a;
	else
		return b;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a._value > b._value)
		return a;
	else
		return b;

}

//PRE FIX
Fixed &	Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed &	Fixed::operator--( void )
{
	this->_value--;
	return (*this);
}

//POST FIX
Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
   ++*this;
   return temp;
}


Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
   --*this;
   return temp;
}