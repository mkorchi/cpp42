/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:50 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/03 18:55:24 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

# define FIXED_H


class Fixed
{
private:
	int	_number;
	static const int _nBits;
public:
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const & src );
	Fixed & operator=( Fixed const & fixed);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};


#endif