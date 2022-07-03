/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 17:02:36 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void )
{	
	ScavTrap simo("simo");
	simo.showStats();

	simo.attack("jack forst");

	simo.guardGate();
	simo.takeDamage(10);
	simo.beRepaired(10);
	simo.showStats();

	return 0;
}