/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/05 13:59:42 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void ) {
	ClapTrap	jad("cjad");
	ClapTrap	zak("zak");

	jad.attack("ie-laabb");
	jad.takeDamage(5);
	jad.showStats();
	jad.setAttackDamage(10);
	
	jad.beRepaired(30);
	jad.showStats();

	zak.setAttackDamage(200);
	zak.setEnergyPoint(200);
	zak.setHitPoint(200);
	zak.showStats();

	zak.attack("cjad");

	return 0;
}