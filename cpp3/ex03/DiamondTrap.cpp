/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:05:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 15:42:43 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    std::cout << "Default DiamondTrap constructor called. " << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructer called. " << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
    std::cout << "DiamondTrap constructor called. " << std::endl;
    this->ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hitPoint = this->FragTrap::_initialHP;
    this->_energyPoint = this->ScavTrap::_initialEnergy;
    this->_attackDamage = this->FragTrap::_initialAD;
}

 DiamondTrap::DiamondTrap( DiamondTrap const & src)
{
    *this = src;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    DiamondTrap::attack( const std::string& target )
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "DiamondTrap " << this->_name << std::endl;
    std::cout << "ClapTrap " << this->ClapTrap::_name << std::endl;
}

void    DiamondTrap::showStats( void )
{
    std::cout << "------------------------" << std::endl;
	std::cout << this->_name << std::endl;
	std::cout << "stats:" << std::endl;
	std::cout << "HP     : " << this->_hitPoint << std::endl;
	std::cout << "Energy : " << this->_energyPoint << std::endl;
	std::cout << "AD     : " << this->_attackDamage << std::endl;
	std::cout << "------------------------" << std::endl;
}
