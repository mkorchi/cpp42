/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:52:54 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 14:02:24 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    //std::cout << "MateriaSource constructer called" << std::endl;
    for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
    std::cout << "MateriaSource destructed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
        {
            std::cout << "	(MateriaSource) materia " << this->_materias[i]->getType() << " template destroyed" << std::endl;
		    delete this->_materias[i];
        }
    }
}

MateriaSource::MateriaSource (MateriaSource const & src)
{
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this == &rhs)
        return *this;
    for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = NULL;	
	}
    
	for (int i = 0; i < 4; i++)
	{
		if (rhs._materias[i] != NULL)
			this->_materias[i] = rhs._materias[i]->clone();
	}
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (materia == NULL)
        return ;
    for (int i = 0; i < 4; i++)
	{
		if (materia == this->_materias[i]) // same address already exists, we check for this to avoid double free
		{
			std::cout << "materia already learned " << std::endl;
			return ;
		}
	}
    
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            std::cout << "(MateriaSource) " << "Materia " << materia->getType() << " learned" << std::endl;
            this->_materias[i] = materia;
            return ;
        }
    }
    std::cout << "(MateriaSource) CANT LEARN ANY MORE MATERIA" << std::endl;
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL
            && this->_materias[i]->getType() == type)
        {
            std::cout << "(MateriaSource) " << "Materia " << type << " created" << std::endl;
            return this->_materias[i]->clone();
        }
    }
    std::cout << "(MateriaSource) " << type << ": unavailable template for this type" << std::endl;
    return NULL;
}