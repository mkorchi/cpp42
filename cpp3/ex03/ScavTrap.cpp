/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:00:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 15:44:28 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const unsigned int ScavTrap::_initialHP = 100;

const unsigned int ScavTrap::_initialEnergy = 50;

const unsigned int ScavTrap::_initialAD = 20;

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructer called!" << std::endl;
	this->_hitPoint = _initialHP;
	this->_energyPoint = _initialEnergy;
	this->_attackDamage = _initialAD;	
}

ScavTrap::ScavTrap( void )
{
	std::cout << "Default ScavTrap constructer called!" << std::endl;
	this->_hitPoint = _initialHP;
	this->_energyPoint = _initialEnergy;
	this->_attackDamage = _initialAD;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructer called!" << std::endl;
}

ScavTrap::ScavTrap( ClapTrap const & src)
{
	*this = src;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
}
	
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has 0 eneregy point" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " ";
	std::cout << "attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage << " points of damage!";
	std::cout << std::endl;
	this->_energyPoint--;
}
