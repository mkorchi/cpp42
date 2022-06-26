/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:36:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:16:38 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie zombie("norman");
	zombie.announce();

	Zombie *newZ = newZombie("newbie");
	newZ->announce();
	delete newZ;
	
	randomChump("rando");
	return (0);
}