/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:39:56 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/12 16:15:05 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP


# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure( void );
		virtual ~Cure( void );
		Cure( Cure const & src);
		Cure & operator=(Cure const & rhs);
		
		AMateria* clone() const;
		void use(ICharacter& target);
		
};







#endif