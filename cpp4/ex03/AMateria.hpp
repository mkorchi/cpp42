/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:56:22 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:46:52 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP


# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria(std::string const & type);
		
		AMateria( void );
		virtual ~AMateria( void );
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & rhs);
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif 