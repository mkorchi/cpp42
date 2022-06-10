/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:42:49 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 15:43:26 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
		
	public:
		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal( AAnimal const & src);
		AAnimal & operator=( AAnimal const & rhs);

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
		
};


#endif