/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:36:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 10:51:23 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>   


Fixed	calculateArea(Point const a, Point const b, Point const c) {
	Fixed 	area;
	Fixed	sideA((a.getY().toFloat() - c.getY().toFloat()));
	Fixed	sideB(b.getY().toFloat() - c.getY().toFloat());
	Fixed	sideC((a.getY().toFloat() - b.getY().toFloat()));
	
	area = Fixed((a.getX().toFloat() * sideA.toFloat()
		+ b.getX().toFloat() * sideB.toFloat()
		+ c.getY().toFloat() * sideC.toFloat()) / 2);
	area = Fixed(std::abs(area.toFloat()));
	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed area = calculateArea(a, b, c);

	std::cout << point.getX() << std::endl;
	std::cout << area << std::endl;
	return false;
}