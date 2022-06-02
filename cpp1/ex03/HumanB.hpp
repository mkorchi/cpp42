/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:27:36 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 11:46:30 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB( void );
		HumanB( std::string name);
		~HumanB( void );
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};




#endif