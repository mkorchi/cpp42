/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:34 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 10:43:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int		main( void ) {

	Point a(Fixed(0), Fixed(5.5f));
	Point b(Fixed(10), Fixed(5.9f));
	Point c(Fixed(30), Fixed(45.2f));
	Point x(Fixed(0), Fixed(0));

	bsp(a, b, c, x);

	return (0);
}	