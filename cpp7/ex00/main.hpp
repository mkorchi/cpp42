/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:24:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 14:51:58 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP


# define MAIN_HPP

# include <iostream>
# include <string>

template< typename T >
void	swap( T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

template< typename T >
T const &	min( T const & x, T const & y)
{
	if ( x < y)
		return x;
	return y;
}

template< typename T >
T const &	max( T const & x, T const & y)
{
	if ( x > y)
		return x;
	return y;
}



#endif