/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:57:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/28 18:58:16 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP


# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	
	public:
		FragTrap( std::string name );
		
		FragTrap( void );
		virtual ~FragTrap( void );
		FragTrap( FragTrap const & src);
		FragTrap &	operator=( FragTrap const & rhs);

		void	highFivesGuys(void);
};



#endif