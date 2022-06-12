/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:51:30 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/12 14:15:23 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"



class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   _materias[4];
    public:
        MateriaSource( void );
        virtual ~MateriaSource( void );
        MateriaSource (MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & rhs);


        virtual void learnMateria(AMateria* materia);
        virtual AMateria* createMateria(std::string const & type);
};




#endif