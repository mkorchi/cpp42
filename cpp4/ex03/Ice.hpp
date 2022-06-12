/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:39:59 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/12 16:15:12 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP


# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice( void );
		virtual ~Ice( void );
		Ice( Ice const & src);
		Ice & operator=(Ice const & rhs);
		
		AMateria* clone() const;
		void use(ICharacter& target);

};


#endif