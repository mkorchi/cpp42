/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:21:15 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/02 11:46:59 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string _type;
		
	public:
		Weapon( void );
		Weapon( std::string type);
		~Weapon( void );
		
		std::string&	getType();
		void	setType(std::string type);
};


#endif