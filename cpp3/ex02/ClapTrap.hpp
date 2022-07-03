/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:20:34 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 18:58:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
		
	public:
		ClapTrap( std::string name );
		
		ClapTrap( void );
		virtual ~ClapTrap( void );
		ClapTrap( ClapTrap const & src);
		ClapTrap &	operator=( ClapTrap const & rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	showStats( void );

		void	setHitPoint( unsigned int hp);
		void	setEnergyPoint( unsigned int energy);
		void	setAttackDamage( unsigned int ad);
};




#endif