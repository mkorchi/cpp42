/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:39:56 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 18:13:59 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP


# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const & src);
		Cure & operator=(Cure const & rhs);
		AMateria* clone() const;
		
};







#endif