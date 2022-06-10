/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/06 19:54:30 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void ) {

	ClapTrap jad("jad");
	jad.showStats();
	jad.setAttackDamage(4);
	jad.attack("ie-laabb");
	
	ScavTrap simo("simo");
	simo.showStats();

	simo.attack("jack forst");

	simo.guardGate();
	simo.beRepaired(10);
	simo.showStats();

	return 0;
}