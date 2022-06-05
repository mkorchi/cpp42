/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:53:47 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 09:16:42 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP


# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	//Orthodox Canonical Form
	Point( void );
	~Point( void );
	Point( Point const & point);
	Point & operator=( Point const & rhs);

	Point( Fixed const x, Fixed const y );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	
};



#endif