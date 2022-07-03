/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:53:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 15:44:41 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) { }


Point::Point( void ) : _x(0), _y(0) { }

Point::~Point( void ) { }

Point::Point( Point const & point) : _x(point._x), _y(point._y) { }

// we can't copy x and y because they are const
Point & Point::operator=( Point const & rhs )
{
	(void) rhs;
	return *this;
}

Fixed	Point::getX( void ) const
{
	return this->_x;	
}

Fixed	Point::getY( void ) const
{
	return this->_y;
}


