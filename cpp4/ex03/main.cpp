/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:55:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 14:06:36 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(NULL); // does nothing
	
	ICharacter* me = new Character("simo"); // create character with name simo with 4 empty slots
	
	AMateria* cure = src->createMateria("cure"); // creating materia from existing template
	AMateria* ice = src->createMateria("ice");
	AMateria* cut = src->createMateria("cut"); // <== returns null, there is no template cut to create from
	
	
	me->equip(ice);
	me->equip(cure);
	me->equip(cure);
	me->equip(cut); // equiping null does nothing
	
	me->unequip(1); // unequipping only empty the slot and doesnt free the item itself
	//delete cure;

	me->equip(cure);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me; // we delete all materia equipped when deleting our character
	delete src; // we delete all templates when deleting our material source

	return 0;
}