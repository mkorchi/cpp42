/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:43:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 17:51:37 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure constructer called" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructer called" << std::endl;
}

Cure::Cure( Cure const & src)
{
	*this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return (clone);
}