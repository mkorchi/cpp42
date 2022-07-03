/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:36:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 15:56:06 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>   


Fixed	calculateArea(Point const a, Point const b, Point const c)
{
	Fixed area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = calculateArea(a, b, c);
	Fixed area2 = calculateArea(point, a, b);
	Fixed area3 = calculateArea(point, b, c);
	Fixed area4 = calculateArea(point, a, c);

	std::cout << area.toAbsoluteFloat() << std::endl;

	if (area.toAbsoluteFloat() == area2.toAbsoluteFloat() + area3.toAbsoluteFloat() + area4.toAbsoluteFloat())
		return true;
	return false;

}