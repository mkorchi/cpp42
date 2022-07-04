/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyConverter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:29:11 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/04 15:47:25 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP

# define CONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <ctype.h>
# include <limits>
# include <float.h>

//char c = 10;       
//int *p = (int*)&c;
// *p = 5 <= run-time error

//char c = 10;       
//int *p = static_cast<int*> (&c); <= compile-time error


class MyConverter
{
	
	private:
		std::string const	_str;
		MyConverter( void );

	public:
		MyConverter( const char *str );
		virtual ~MyConverter( void );
		MyConverter( MyConverter const & src);
		MyConverter & operator=( MyConverter const & rhs);

		void	fromChar( char c ) const;
		void	fromInt( int i ) const;
		void	fromFloat( float f ) const;
		void	fromDouble( double d ) const;


		void		convert( void) const;
		std::string	detectType( void ) const;
		bool		checkIfValid( void ) const;

		void		printNaN( void ) const;
		void		printImpossible( void ) const;

};



#endif