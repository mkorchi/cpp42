/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:14:04 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/12 19:22:35 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character( void ) :_name("unnamed")
{
	//std::cout << "Default Character constructer called" << std::endl;
	int i = 0;
	while (i < 4)
		this->_materias[i++] = NULL;
}

Character::Character( std::string name ) : _name(name)
{
	std::cout << "Character created: " << name << std::endl;
	int i = 0;
	while (i < 4)
		this->_materias[i++] = NULL;
}

Character::~Character( void )
{
	std::cout << "Character deleted: " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			std::cout << "	materia (" << i << ") " << this->_materias[i]->getType() << " deleted" << std::endl;
			delete this->_materias[i];
		}
	}
}

Character::Character(Character const & src)
{
	*this = src;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = NULL;	
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (rhs._materias[i] != NULL)
			this->_materias[i] = rhs._materias[i]->clone();
	}
	return *this;
}


std::string const & Character::getName() const
{
	return _name;
}

void 	Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (m == this->_materias[i])
		{
			std::cout << "materia already equipped " << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			std::cout << this->_name << " equipped " <<  m->getType() << " materia (slot:" << i << ")" << std::endl;
			return ;
		}
	}
	std::cout << "can't equip any more materia, your inventory is full " << std::endl;
}

//unequip only remove materia at slot at index idx and doesnt free it
void 	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx] != NULL)
	{
		std::cout << this->_name << " unequipped " << this->_materias[idx]->getType() << " materia (slot:" << idx << ")" << std::endl;
		this->_materias[idx] = NULL;
	}
}

void 	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx] != NULL)
	{
		AMateria *materia = this->_materias[idx];
		materia->use(target);
	}
}