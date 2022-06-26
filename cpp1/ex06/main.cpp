/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:14:32 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:47:59 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int argc, char **argv )
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	return (0);
}