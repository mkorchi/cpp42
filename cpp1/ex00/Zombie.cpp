/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:27:14 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:19:57 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
	
}

Zombie::Zombie( std::string newName )
{
	this->_name = newName;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " destructed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}