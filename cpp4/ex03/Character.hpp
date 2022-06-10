/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:09:25 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 20:24:15 by mkorchi          ###   ########.fr       */
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
	int			
public:
	Character( void );
	Character( std::string name );
	~Character( void );
	Character( Character const & src );
	Character & operator=( Character const & rhs );

	std::string const & getName() const;
	void 				equip(AMateria* m) = 0;
	void 				unequip(int idx) = 0;
	void 				use(int idx, ICharacter& target) = 0;
};



#endif