/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:46:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 23:16:20 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

# include <iostream>
# include <string.h>

template < typename T >
void	fun( T val)
{
	std::cout << val << std::endl;
}

template < typename T>
void	iter( T arr[], int len, void (*f)( T ))
{
	int	i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}




#endif