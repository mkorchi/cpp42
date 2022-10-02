/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyConverter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:02:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/09/05 18:57:47 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyConverter.hpp"
#include <math.h>


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
	std::cout << "char:'" << c << "'" << std::endl; 
	std::cout << "int: " << static_cast<int> (c) << std::endl;
	std::cout << "float: " << static_cast<float> (c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double> (c) << std::endl;
}

void	MyConverter::fromInt( int i ) const
{
	//*************** CHAR_CASE ***************
	if (i > CHAR_MAX || i < CHAR_MIN)
	{
		std::cout << "char: " << "impossible" << std::endl;
	}
	else
	{
		if (isprint(i))
			std::cout << "char: '" << static_cast<char> (i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
		
	//*************** INT_CASE ***************
	std::cout << "int: " << static_cast<int> (i) << std::endl;

	//*************** FLOAT_CASE ***************
	std::cout << "float: " << static_cast<float> (i) <<  ".0f" << std::endl;

	//*************** DOUBLE_CASE ***************
	std::cout << "double: "  << static_cast<double> (i) << ".0" <<  std::endl;


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
	{
		double d = static_cast<double> (f);
		if (d > INT_MAX || d < INT_MIN)
			std::cout << "int: " << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int> (d) << std::endl;
	}

	//*************** FLOAT_CASE ***************
	if (f - static_cast<long int> (f))
		std::cout << "float: " << f <<  "f" << std::endl;
	else
		std::cout << "float: " << f <<  ".0f" << std::endl;
		
	//*************** DOUBLE_CASE ***************
	if (f - static_cast<long int> (f))
		std::cout << "double: " << static_cast<double> (f) << std::endl;
	else
		std::cout << "double: " << static_cast<double> (f) << ".0" << std::endl;
		
}

void	MyConverter::fromDouble( double d ) const
{
	//*************** CHAR_CASE ***************
	if (d > CHAR_MAX || d < CHAR_MIN)
	{
		std::cout << "char: " << "impossible" << std::endl;
	}
	else
	{
		if (isprint(static_cast<char> (d)))
			std::cout << "char: '" << static_cast<char> (d) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	
	//*************** INT_CASE ***************
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (d) << std::endl;
		
	//*************** FLOAT_CASE ***************
	if (d  > (FLT_MAX) || d < (FLT_MIN))
		std::cout  << "float: " << "impossible" << std::endl;
	else
	{
		if ((d - static_cast<long int> (d)))
			std::cout << "float: "  << static_cast<float> (d)  << 'f' << std::endl;
		else
			std::cout << "float: "  << static_cast<float> (d) << ".0" << 'f' << std::endl;

	}

	//*************** DOUBLE_CASE ***************
	
	if ((d - static_cast<long> (d)))
		std::cout << "double: " << (d) << std::endl;
	else
		std::cout << "double: " << (d) << ".0" << std::endl;
	
}

void	MyConverter::convert( void ) const
{
	if (this->_str == "nan" || this->_str == "nanf")
	{
		this->printNaN();
		return ;
	}
	std::string type = detectType();
	if (type == "char")
	{
		char c = this->_str.at(0);
		fromChar(c);
	}
	else if (type == "float")
	{
		try
		{
			float f = std::stof(this->_str);
			fromFloat(f);
		}
		catch (std::invalid_argument)
		{
			printNaN();
		}
		catch (std::out_of_range)
		{
			printImpossible();
		}
	}
	else if (type == "double")
	{
		try
		{
			double d = std::stod(this->_str);
			fromDouble(d);
		}
		catch (std::invalid_argument)
		{
			printNaN();
		}
		catch (std::out_of_range)
		{
			printImpossible();
		}
	}
	else if (type == "int")
	{
		try
		{
			int i = std::stoi(this->_str);
			fromInt(i);
		}
		catch (std::invalid_argument)
		{
			printNaN();
		}
		catch (std::out_of_range)
		{
			printImpossible();
		}
	}
}

std::string	MyConverter::detectType( void ) const
{
	if (this->_str == "-inf" || this->_str == "+inf" || this->_str == "nan" || this->_str == "inf")
		return "double";
	if (this->_str.length() == 1 && !isnumber(this->_str.at(0)))
		return "char";
	if (this->_str.find("f") != std::string::npos)
		return "float";
	if (this->_str.find('.') != std::string::npos)
		return "double";
	return "int";
}

bool	MyConverter::checkIfValid( void ) const
{
	if (this->_str.length() == 1)
		return true;
	if (this->_str == "-inf" || this->_str == "+inf" || this->_str == "nan"
		|| this->_str == "-inff" | this->_str == "+inff" || this->_str == "nanf" || this->_str == "inff" ||  this->_str == "inf")
		return true;
	
	const char *str = this->_str.c_str();
	unsigned long	i = 0;
	int				pointC = 0;
	
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '.')
		return false;
	while (i < this->_str.length() - 1)
	{
		if (str[i] == '.')
		{
			pointC++;
			if (pointC >= 2)
				return false;
		}
		else if (!isnumber(str[i]))
			return false;
		i++;
	}
	if (str[i] == 'f' || isnumber(str[i]))
		return true;
	return false;
}

void		MyConverter::printNaN( void ) const
{
	std::cout << "char: impossible" << std::endl; 
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void		MyConverter::printImpossible( void ) const
{
	std::cout << "char: impossible" << std::endl; 
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}