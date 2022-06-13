/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:34 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/13 09:09:26 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int		main( void ) {

	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(20), Fixed(0));
	Point c(Fixed(10), Fixed(30));
	Point x(Fixed(10), Fixed(15));

	if (bsp(a, b, c, x))
		std::cout << "point x is inside the triangle a b c" << std::endl; 	
	else
		std::cout << "point x is not inside the triangle a b c" << std::endl; 	


	return (0);
}	