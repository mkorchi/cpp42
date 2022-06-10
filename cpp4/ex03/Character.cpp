/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:14:04 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 20:22:55 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character( void ) :_name("unnamed")
{
	std::cout << "Character constructer called" << std::endl;
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
}

Character::Character( std::string name ) : _name(name)
{
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
}

Character::~Character( void )
{
	std::cout << "Character destructer called" << std::endl;
	
}

Character::Character(Character const & src)
{
	
}

Character & Character::operator=(Character const & rhs)
{
	
}


std::string const & Character::getName() const
{
	return _name;
}

void 	equip(AMateria* m)
{
	w
}

void 	unequip(int idx)
{
	
}

void 	use(int idx, ICharacter& target)
{
	
}