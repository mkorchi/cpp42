/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:59:05 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 18:39:52 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria constructer called" << std::endl;
}

AMateria::AMateria( void ) : _type("useless materia")
{
	std::cout << "AMateria default constructer called" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructer called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	if (this->getType().compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
