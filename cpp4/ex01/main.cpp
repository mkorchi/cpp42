/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:43:10 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{

	//=========== TEST 1 ============

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

	//=========== TEST 2 ============
	Dog dog;
	dog.getBrain()->setIdea(0, "******* WATER *******");
	
	{
		Dog dogCopy(dog);
		dogCopy.getBrain()->setIdea(0, "********* MEAT *******");
		std::cout << "copied dog: " << dogCopy.getBrain()->getIdea(0) << std::endl;
		// <- new Dog gets destructed here 
	}
	std::cout << "original dog: " << dog.getBrain()->getIdea(0) << std::endl;
	return 0;
}