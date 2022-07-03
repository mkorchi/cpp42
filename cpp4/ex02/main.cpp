/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 22:16:20 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	//AAnimal *animal = new AAnimal();  //<= error, we can't initiate an abstract class
	AAnimal *cat = new Cat();
	AAnimal *dog = new Dog();

	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << dog->getType() << std::endl;
	dog->makeSound();


	delete cat;
	delete dog;
	
	return 0;
}