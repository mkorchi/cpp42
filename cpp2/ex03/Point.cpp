/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:53:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/04 19:00:40 by mkorchi          ###   ########.fr       */
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
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return *this;
}


