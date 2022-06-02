/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:55:05 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 11:48:55 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {
	
}

Zombie::Zombie( std::string newName ) {
	this->_name = newName;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name) {
	this->_name = name;
}