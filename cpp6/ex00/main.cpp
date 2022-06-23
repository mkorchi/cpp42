/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:35:53 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/23 14:40:45 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MyConverter.hpp"


int	main( int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return 1;
	}
	MyConverter converter(argv[1]);

	converter.detectType();

	return 0;
}