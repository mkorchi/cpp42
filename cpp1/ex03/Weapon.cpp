/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:21:17 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 11:47:11 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::~Weapon( void ) {}

Weapon::Weapon( std::string type ) {
	this->_type = type;
}


std::string&	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
