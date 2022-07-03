/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 17:12:39 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main( void )
{

	FragTrap simo("simo");
	simo.showStats();
	FragTrap jad("jad");

	jad.attack("slime");
	simo.attack("jad");
	jad.takeDamage(30);
	jad.showStats();
	jad.beRepaired(10);
	jad.showStats();
	
	jad.highFivesGuys();

	return 0;
}