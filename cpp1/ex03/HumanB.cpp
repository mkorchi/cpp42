/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:27:11 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 11:47:54 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( void ) { }

HumanB::~HumanB( void ) {
	std::cout << this->_name << " died!" << std::endl;
	this->_weapon = NULL;
}

HumanB::HumanB( std::string name ) {
	this->_name = name;
	this->_weapon = NULL;	
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " is currently not armed" << std::endl;
}