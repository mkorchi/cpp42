/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:51:52 by mkorchi           #+#    #+#             */
/*   Updated: 2022/09/14 22:20:16 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template < typename T >
void	fun( T val)
{
	std::cout << val << std::endl;
}

template < typename T>
void	iter( T arr[], int len, void (*f)( T ))
{
	int	i = 0;

	try {
		while (i < len)
		{
			f(arr[i]);
			i++;
		}
	} catch (std::exception &e)
	{
		std::cout << "error" << std::endl;
	}

}

int	main( void )
{
	
	int i[6] = {1, 2, 3, 6, 5, 0};
	// float f[10] = {0.1f, 10, 5.5f, 9, 30.1f, 4.0f, 7, 132.0, 88.99, 5};
	// std::string s[4] = {"sadf", "text2", "sadf", "test4"};

	try {
		std::cout << i[20] << std::endl;
	} catch (std::exception &e){
		std::cout << "error" << std::endl;
		
	}
	// iter(i, 13, &fun);
	// std::cout << "********************" << std::endl;
	// iter(f, 10, &fun);
	// std::cout << "********************" << std::endl;
	// iter(s, 4, &fun);
	
	return (0);
}