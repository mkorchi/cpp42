/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:55:25 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 18:20:57 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie( void );
		Zombie( std::string newName );

		~Zombie( void );

		void	announce( void );

		void	setName(std::string name);
};


#endif