/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:53:43 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 10:10:15 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void ) {
	const int	hordeSize = 2;
	
	Zombie *zombies = zombieHorde(hordeSize, "sombi");
	
	int	i = 0;
	while (i < hordeSize)
		zombies[i++].announce();
	
	delete [] zombies;
}