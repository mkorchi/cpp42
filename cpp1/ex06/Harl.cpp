/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:14:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:46:50 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!\n" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4)
	{
		if (names[i].compare(level) == 0)
			break ;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "[ " << names[0] << " ]" << std::endl;
			this->_debug();
		case 1:
			std::cout << "[ " << names[1] << " ]" << std::endl;
			this->_info();
		case 2:
			std::cout << "[ " << names[2] << " ]" << std::endl;
			this->_warning();
		case 3:
			std::cout << "[ " << names[3] << " ]" << std::endl;
			this->_error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
