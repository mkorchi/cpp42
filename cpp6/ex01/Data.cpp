/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 21:43:00 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/26 21:52:48 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( int a, std::string b)
	: _a(a), _b(b)
{
	
}

Data::Data( void )
	: _a(0) , _b("default")
{
	
}

Data::~Data( void )
{
	
}

Data::Data(Data const & src)
{
	*this = src;
}

Data & Data::operator=(Data const & rhs)
{
	if (this != &rhs)
	{
		this->_a = rhs._a;
		this->_b = rhs._b;
	}
	return *this;
}

int			Data::getA( void )
{
	return this->_a;	
}

std::string	Data::getB( void )
{
	return this->_b;
}
