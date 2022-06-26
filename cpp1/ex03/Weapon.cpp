/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:21:17 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:35:08 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ): _type("knife") {}

Weapon::~Weapon( void )
{
	std::cout << "weapon was destroyed" << std::endl;
}

Weapon::Weapon( std::string type )
{
	this->_type = type;
}


std::string&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
