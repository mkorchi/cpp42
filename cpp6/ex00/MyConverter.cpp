/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyConverter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:02:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/24 19:56:59 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyConverter.hpp"

//making default constructer private because we don't need it
MyConverter::MyConverter( void ) {}

MyConverter::MyConverter( const char *str ) : _str(str) {}

MyConverter::~MyConverter( void ) {}

MyConverter::MyConverter( MyConverter const & src) : _str(src._str)
{
	*this = src;
}

MyConverter & MyConverter::operator=( MyConverter const & rhs)
{
	(void) rhs;
	return *this;
}

void	MyConverter::fromChar( char c ) const
{
	// long	l = atoi(this->_str.c_str());
	
	// if (l > CHAR_MAX || l < CHAR_MIN)
	// {
	// 	std::cout << "char: " << "impossible" << std::endl;
	// 	return ;
	// }
	// if (isprint(l))
	// 	std::cout << "char: '" << static_cast<char> (l) << "'" << std::endl;
	// else
	// 	std::cout << "char: Non displayable" << std::endl;
	std::cout << "char :'" << c << "'" << std::endl; 
	std::cout << "int : " << static_cast<int> (c) << std::endl;
	std::cout << "float : " << static_cast<int> (c) << 'f' << std::endl;
	std::cout << "double : " << static_cast<int> (c) << std::endl;
}

void	MyConverter::fromInt( long l ) const
{
	//*************** CHAR_CASE ***************
	if (l > CHAR_MAX || l < CHAR_MIN)
	{
		std::cout << "char: " << "impossible" << std::endl;
	}
	else
	{
		if (isprint(l))
			std::cout << "char: '" << static_cast<char> (l) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
		
	//*************** INT_CASE ***************
	if (l > INT_MAX || l < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (l) << std::endl;

	//*************** FLOAT_CASE ***************
	std::cout.precision(1);
	if (l > static_cast<long> (FLT_MAX) || l < static_cast<long> (FLT_MIN))
		std::cout  << "float: " << "impossible" << std::endl;
	else
		std::cout << "float: "<< std::fixed << static_cast<float> (l) <<  'f' << std::endl;

	//*************** DOUBLE_CASE ***************
	std::cout << "double: " << std::fixed << static_cast<double> (l) << std::endl;

	

}

void	MyConverter::fromFloat( float f ) const
{
	//*************** CHAR_CASE ***************
	if (f > CHAR_MAX || f < CHAR_MIN)
	{
		std::cout << "char: " << "impossible" << std::endl;
	}
	else
	{
		if (isprint(static_cast<char> (f)))
			std::cout << "char: '" << static_cast<char> (f) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	
	//*************** INT_CASE ***************
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (f) << std::endl;

		//*************** FLOAT_CASE ***************
	// std::cout.precision(6);
	std::cout << "float: " << f <<  'f' << std::endl;

	//*************** DOUBLE_CASE ***************
	std::cout << "double: " << static_cast<double> (f) << std::endl;
		
}

void	MyConverter::fromDouble( double d ) const
{
	(void) d;
	// std::cout << "double: " << atof(this->_str.c_str()) << std::endl;
}

void	MyConverter::convert( void ) const
{
	std::string type = detectType();
	if (type == "char")
	{
		char c = this->_str.at(0);
		fromChar(c);
	}
	else if (type == "float")
	{
		float f = static_cast<float> (atof(this->_str.c_str()));
		fromFloat(f);
	}
	else if (type == "double")
	{
		
	}
	else if (type == "int")
	{
		long l = atol(this->_str.c_str());
		fromInt(l);
	}
}

//|| this->_str == "-inff" || this->_str == "+inff" || this->_str == "nanf"
std::string	MyConverter::detectType( void ) const
{
	// if (this->_str == "-inff" || this->_str == "+inff" || this->_str == "nanf")
	// 	return "float";
	if (this->_str == "-inf" || this->_str == "+inf" || this->_str == "nan")
		return "double";
	if (this->_str.length() == 1 && !isnumber(this->_str.at(0)))
		return "char";
	if (this->_str.find("f") != std::string::npos)
		return "float";
	if (this->_str.find('.') != std::string::npos)
		return "double";
	return "int";
}