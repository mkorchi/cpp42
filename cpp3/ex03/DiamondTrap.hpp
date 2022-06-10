/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:05:41 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 15:43:53 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap( void );
    ~DiamondTrap( void );
    DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src);
	DiamondTrap &	operator=( DiamondTrap const & rhs);

    void    attack( const std::string& target );
    void    whoAmI( void );

    void    showStats( void );
};

#endif