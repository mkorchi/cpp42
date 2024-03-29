/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:09:25 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:49:26 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP


# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>
# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_materias[4];
		
	public:
		Character( std::string name );
		
		Character( void );
		virtual ~Character( void );
		Character( Character const & src );
		Character & operator=( Character const & rhs );

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
	};



#endif