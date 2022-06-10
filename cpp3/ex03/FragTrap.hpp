/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:57:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/07 15:43:58 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP


# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
protected:
	const static unsigned int _initialHP;
	const static unsigned int _initialEnergy;
	const static unsigned int _initialAD;
	
public:
	FragTrap( void );
	~FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src);
	FragTrap &	operator=( FragTrap const & rhs);

	void	highFivesGuys(void);
};



#endif