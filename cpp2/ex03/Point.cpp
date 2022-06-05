/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:53:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 09:17:32 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) { }


Point::Point( void ) : _x(0), _y(0) { }

Point::~Point( void ) { }

Point::Point( Point const & point) {
	*this = point;
}

Point & Point::operator=( Point const & rhs ) {
	if (this != &rhs) {
		const Fixed& xref = this->_x;
		const Fixed& yref = this->_y;
		
		const_cast<Fixed&>(xref) = rhs._x;
		const_cast<Fixed&>(yref) = rhs._y;
	}
	return *this;
}

Fixed	Point::getX( void ) const {
	return this->_x;	
}

Fixed	Point::getY( void ) const {
	return this->_y;
}


