/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:48:14 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:53:45 by mkorchi          ###   ########.fr       */
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
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
