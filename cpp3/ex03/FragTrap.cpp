/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:01:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 15:44:52 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const unsigned int FragTrap::_initialHP = 100;

const unsigned int FragTrap::_initialEnergy = 100;

const unsigned int FragTrap::_initialAD = 30;

FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap constructer called!" << std::endl;
	this->_hitPoint = _initialHP;
	this->_energyPoint = _initialEnergy;
	this->_attackDamage = _initialAD;	
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructer called!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap constructer called!" << std::endl;
	this->_hitPoint = _initialHP;
	this->_energyPoint = _initialEnergy;
	this->_attackDamage = _initialAD;	
}

FragTrap::FragTrap( FragTrap const & src)
{
	*this = src;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has 0 eneregy point" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " request a high five" << std::endl;
	this->_energyPoint--;
}