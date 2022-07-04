/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:21:46 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/04 21:51:02 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
Array<T>::Array(unsigned int n)
{
	this->_elems = new T[n];
	this->_size = n;
}

template < typename T >
Array<T>::Array( void )
{
	this->_elems = new T[];
	this->_size = 0;
}

template < typename T >
Array<T>::Array( void )
{
	delete [] this->_elems;
}

template < typename T >
Array<T>::Array( Array const & src)
{
	for( int i = 0; i < _size; i++)
	{
		this->_elems[i] = src._elems[i];
	}
}

template < typename T >
Array<T> & Array<T>::operator=( Array const & rhs)
{
	for( int i = 0; i < _size; i++)
	{
		this->_elems[i] = src._elems[i];
	}
	return *this;
}

template < typename T >
T & Array<T>::operator[](int index)
{
	if (index < 0 || index >= this->_size)
	{
		throw std::exception;
	}
	return this->_elems[index];
}

template < typename T >
unsigned int Array<T>::size( void ) const
{
	return this->_size;
}

