/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:01:44 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/03 16:12:04 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP


# define ARRAY_HPP


template < class T>
class Array {

	private:
		
	
	public:
		Array( void );
		virtual ~Array( void );
		Array( Array const & src);
		Array & operator=( Array const & rhs);

	
	
};




#endif