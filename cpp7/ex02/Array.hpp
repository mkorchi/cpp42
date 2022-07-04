/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:01:44 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/04 21:50:09 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP


# define ARRAY_HPP

template < typename T >
class Array
{
	private:
		T *_elems;
		unsigned int _size;
		
	public:
		Array( void );
		virtual ~Array( void );
		Array( Array const & src);
		Array & operator=( Array const & rhs);

		Array( unsigned int n);
		T & operator[](int index);
		unsigned int size( void ) const;

};




#endif