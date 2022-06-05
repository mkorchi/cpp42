/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 18:55:32 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void ) {
	ScavTrap simo("simo");

	simo.guardGate();
	simo.setEnergyPoint(2);
	simo.attack("sfn");
	simo.takeDamage(20);
	simo.beRepaired(10);
	simo.showStats();
	simo.attack("ysf");


	return 0;
}