/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyConverter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:02:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/23 17:56:04 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyConverter.hpp"

//making default constructer private because we don't need it
MyConverter::MyConverter( void ) {}

MyConverter::MyConverter( const char *str ) : _str(str)
{
	std::cout << "converter created with value: " << _str << std::endl;
}

MyConverter::~MyConverter( void )
{
	std::cout << "converter destructed" << std::endl;
}

MyConverter::MyConverter( MyConverter const & src) : _str(src._str)
{
	*this = src;
}

MyConverter & MyConverter::operator=( MyConverter const & rhs)
{
	(void) rhs;
	return *this;
}

void	MyConverter::print( void ) const
{
	std::cout << this->_str << std::endl;
}

void	MyConverter::fromChar( char c ) const
{
	
}

void	MyConverter::fromInt( int i ) const
{
	
}

void	MyConverter::fromFloat( double d ) const
{
	float f;
	
	if (d > FLT_MAX || d < FLT_MIN)
	{
		std::cout << "out of range" << std::endl;
		return ;
	}
	f = static_cast<float> (d);
	std::cout << "float: " << f << std::endl;
}

void	MyConverter::fromDouble( double d ) const
{
	if (d >=)
}

int		MyConverter::detectType( void ) const
{
	// char	c;
	int		i;
	float	f;
	double	d;
	
	if (this->_str.back() == 'f') // we assume its a float
	{
		fromFloat(atof(this->_str.c_str()));
	}
	else if (this->_str.find('.') != std::string::npos) // double
	{
		fromDouble(atof(this->_str.c_str()));
	}
	return 0;
}