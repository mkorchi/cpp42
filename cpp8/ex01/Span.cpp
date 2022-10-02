/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:52 by mkorchi           #+#    #+#             */
/*   Updated: 2022/10/02 15:22:21 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int capacity)
{
    std::cout << "span created with capacity " << capacity << std::endl;
    this->_capacity = capacity;
    
}

void Span::addNumber(int number)
{
    if (this->_vector.size() == this->_capacity)
    {
        // full cant add more element
        throw std::exception();
    }
    this->_vector.push_back(number);
}

int	Span::shortestSpan( void )
{
    if ( this->_vector.empty() || this->_vector.size() == 1)
    {
        throw std::exception();
    }
	std::vector<int> temp(this->_vector);
	std::sort(temp.begin(), temp.end());
    int sSpan = std::abs(temp[0] - temp[1]);
	for (unsigned int i = 0; i < temp.size() - 1; i++)
	{
       if (std::abs(temp[i] - temp[i + 1]) < sSpan)
       {
           sSpan = std::abs(temp[i] - temp[i + 1]);
       }
	}
    return sSpan;
}

int	Span::longestSpan( void )
{
    if ( this->_vector.empty() || this->_vector.size() == 1)
    {
        throw std::exception();
    }
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

    min = std::min_element(this->_vector.begin(), this->_vector.end());
	max = std::max_element(this->_vector.begin(), this->_vector.end());
	
	return std::abs(*max - *min);
}

Span::~Span( void )
{
    std::cout << "span destructed" << std::endl;
}


Span::Span( Span const & src)
{
    std::cout << "copy constructer called" << std::endl;
    this->_capacity = src._capacity;
    for (unsigned int i = 0; i < src._vector.size(); i++)
        this->_vector.push_back(src._vector[i]);
}

Span & Span::operator=( Span const & rhs)
{
    std::cout << "overload operator = called" << std::endl;
    this->_vector.clear();
    this->_capacity = rhs._capacity;
    for (unsigned int i = 0; i < rhs._vector.size(); i++)
        this->_vector.push_back(rhs._vector[i]);
    return *this;
}

void    Span::addRange( int *arr, int len)
{
	if (this->_vector.size() + len > this->_capacity)
		throw std::exception();
    this->_vector.insert(this->_vector.end(), arr, arr + len);
}

void	Span::addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int distance = std::distance(begin, end);
	if (this->_vector.size() + distance > this->_capacity )
		throw std::exception();
	this->_vector.insert(this->_vector.end(), begin, end);
}


unsigned int Span::getCapacity( void )
{
    return this->_capacity;
}

unsigned int	Span::size( void )
{
    return this->_vector.size();
}

int & Span::operator[]( int index )
{
	if (index < 0 || static_cast<unsigned int> (index) >= this->_vector.size())
	{
		throw std::out_of_range("Exception: index out of bound");
	}
	return this->_vector[index];
}
