/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:50 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 15:33:37 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

# define FIXED_H


class Fixed
{
	private:
		int	_value;
		static const int _nBits;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & rhs);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};


#endif