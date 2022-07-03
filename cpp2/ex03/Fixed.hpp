/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:50 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 15:56:51 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _nBits;
		
	public:

		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & fixed);

		Fixed(const int number);
		Fixed(const float number);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		float	toAbsoluteFloat( void ) const;
		
		bool	operator>( Fixed const & fixed);
		bool	operator<( Fixed const & fixed);
		bool	operator>=( Fixed const & fixed);
		bool	operator<=( Fixed const & fixed);
		bool	operator==( Fixed const & fixed);
		bool	operator!=( Fixed const & fixed);

		Fixed	operator+( Fixed const & fixed);
		Fixed	operator-( Fixed const & fixed);
		Fixed	operator*( Fixed const & fixed);
		Fixed	operator/( Fixed const & fixed);

		//PREFIX
		Fixed &	operator++( void );
		Fixed &	operator--( void );

		//POSTFIX
		Fixed	operator++( int );	
		Fixed	operator--( int );

		static Fixed &	min( Fixed & a, Fixed & b );
		static const Fixed &	min( Fixed const & a, Fixed const & b );

		static Fixed &	max( Fixed & a, Fixed & b );
		static const Fixed &	max( Fixed const & a, Fixed const & b );

	
	
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i);

#endif