/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:01:44 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/05 12:45:15 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP


# define ARRAY_HPP
# include "iostream"

template < typename T >
class Array
{
	private:
		T *_elems;
		unsigned int _size;
		
	public:
	
		Array( void )
		{
			std::cout << "Array created with 0 length" << std::endl;
			this->_elems = new T[0];
			this->_size = 0;			
		}
		
		virtual ~Array( void )
		{
			std::cout << "Array deleted" << std::endl;
			delete [] this->_elems;
		}
		
		Array( Array const & src)
		{
			std::cout << "Array copy constructer" << std::endl;
			this->_elems  = new T[src._size];
			this->_size = src._size;
			for( unsigned int i = 0; i < _size; i++)
			{
				this->_elems[i] = src._elems[i];
			}
		}
		
		Array & operator=( Array const & rhs)
		{
			std::cout << "Array operator = called" << std::endl;
			if (this != rhs) {
				delete [] this->_elems;
				this->_elems = new T[rhs._size];
				this->_size = rhs._size;
				for( unsigned int i = 0; i < _size; i++)
				{
					this->_elems[i] = rhs._elems[i];
				}
			}
			return *this;
		}

		Array( unsigned int n)
		{
			std::cout << "Array initialized with size " << n << std::endl;
			this->_elems = new T[n];
			this->_size = n;
		}
		
		T & operator[](int index)
		{
			if (index < 0 || static_cast<unsigned int> (index) >= this->_size)
			{
				throw std::out_of_range("Exception: index out of bound");
			}
			return this->_elems[index];
		}
		
		unsigned int size( void ) const
		{
			return this->_size;
		}
};




#endif
