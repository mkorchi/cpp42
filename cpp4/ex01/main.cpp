/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 15:30:11 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Animal *animal[10];
	for(int i = 0; i < 5; i++)
		animal[i] = new Dog();
		
	for(int i = 5; i < 10; i++)
		animal[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
	}

	// delete dogs and cat directly as animals ==> will call both destructers
	for(int i = 0; i < 10; i++)
		delete animal[i];
	
	return 0;
}