/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:20:31 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 18:56:01 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const unsigned int ClapTrap::_initialHP = 10;

const unsigned int ClapTrap::_initialEnergy = 10;

const unsigned int ClapTrap::_initialAD = 0;

ClapTrap::ClapTrap( void ) 
	: _name("unnamed"), _hitPoint(_initialHP), _energyPoint(_initialEnergy), _attackDamage(_initialAD)
{	
	std::cout << "Default ClapTrap constructer called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) 
	: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{	
	std::cout << "ClapTrap constructer called!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called!" << std::endl;	
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	*this = src;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has 0 eneregy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " ";
	std::cout << "attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage << " points of damage!";
	std::cout << std::endl;
	this->_energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " ";
	std::cout << "was attacked, ";
	std::cout << "losing " << amount << " HP!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has 0 eneregy point" << std::endl;
		return ;
	}
	this->_hitPoint += amount;
	std::cout << "ClapTrap " << this->_name << " ";
	std::cout << "was healed, ";
	std::cout << "restoring " << amount << " HP!";
	std::cout << std::endl;
	this->_energyPoint--;
}

void	ClapTrap::showStats( void )
{
	std::cout << "------------------------" << std::endl;
	std::cout << this->_name << std::endl;
	std::cout << "stats:" << std::endl;
	std::cout << "HP     : " << this->_hitPoint << std::endl;
	std::cout << "Energy : " << this->_energyPoint << std::endl;
	std::cout << "AD     : " << this->_attackDamage << std::endl;
	std::cout << "------------------------" << std::endl;
}


void	ClapTrap::setHitPoint( unsigned int hp)
{
	this->_hitPoint = hp;
}

void	ClapTrap::setEnergyPoint( unsigned int energy)
{
	this->_energyPoint = energy;
}

void	ClapTrap::setAttackDamage( unsigned int ad)
{
	this->_attackDamage = ad;
}
