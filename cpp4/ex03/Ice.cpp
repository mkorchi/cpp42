/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:46:35 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/12 16:15:37 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	//std::cout << "Ice constructer called" << std::endl;
}

Ice::~Ice( void )
{
	//std::cout << "Ice destructer called" << std::endl;
}

Ice::Ice( Ice const & src)
{
	*this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}


void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
