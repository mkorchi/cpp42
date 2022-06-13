/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:50 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/13 08:12:47 by mkorchi          ###   ########.fr       */
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
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i);

#endif