/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:05:41 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 18:57:46 by mkorchi          ###   ########.fr       */
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
        DiamondTrap( std::string name );
        
        DiamondTrap( void );
        virtual ~DiamondTrap( void );
        DiamondTrap( DiamondTrap const & src);
        DiamondTrap &	operator=( DiamondTrap const & rhs);

        void    attack( const std::string& target );
        void    whoAmI( void );

        void    showStats( void );
};

#endif