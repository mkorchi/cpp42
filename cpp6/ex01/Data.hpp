/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 21:40:58 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/26 21:50:48 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP


# define DATA_HPP
# include <iostream>
# include <string>


class Data
{
	
	private:
		int			_a;
		std::string _b;
		
	public:
		Data( int a, std::string b);
		Data( void );
		~Data( void );
		Data(Data const & src);
		Data & operator=(Data const & rhs);

		int			getA( void );
		std::string	getB( void );
};



#endif