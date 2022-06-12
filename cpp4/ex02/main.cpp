/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:45 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/11 12:41:16 by mkorchi          ###   ########.fr       */
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
	std::cout << dog->getType() << std::endl;


	delete cat;
	delete dog;
	
	return 0;
}