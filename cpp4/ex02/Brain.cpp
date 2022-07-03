/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:48:14 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 12:34:46 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructer called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructer called" << std::endl;
}

Brain::Brain( Brain const & src)
{
	std::cout << "Brain copy constructer called" << std::endl;
	*this = src;
	
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain overloaded operation = called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}


std::string Brain::getIdea(int pos)
{
	if (pos >= 0 && pos < SIZE)
		return this->_ideas[pos];
	return "";
}

void		Brain::setIdea(int pos, std::string const &idea)
{
	if (pos >= 0 && pos < SIZE)
		this->_ideas[pos] = idea;
}
