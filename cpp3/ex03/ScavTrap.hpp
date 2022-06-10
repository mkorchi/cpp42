/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:00:35 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 13:08:41 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	const static unsigned int _initialHP;
	const static unsigned int _initialEnergy;
	const static unsigned int _initialAD;
	
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( ClapTrap const & src);
	ScavTrap &	operator=( ScavTrap const & rhs);

	void	guardGate( void );
	void	attack(const std::string& target);

};



#endif
