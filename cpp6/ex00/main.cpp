/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:35:53 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 16:45:29 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main( int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "too many arguments" << std::endl;
		return 1;
	}
	char	*str = argv[1];
	
	char 	resChar;
	int 	resInt;
	float resFloat;
	double resDouble;
	
	resInt = atoi(str);
	std::cout << "int: " << resInt << std::endl;

	return 0;
}