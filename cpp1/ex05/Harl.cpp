/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:14:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:44:18 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	std::cout << "harl constructed!" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "harl destructed!" << std::endl;
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	typedef void (Harl::*fun)(void);
	
	fun f[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4)
	{
		if (actions[i].compare(level) == 0)
			break ;
		i++;
	}
	if (i >= 4)
		return ;
	(this->*(f[i]))();
}
