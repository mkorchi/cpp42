/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:53:07 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 12:55:09 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
		
	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const & src);
		Dog & operator=( Dog const & rhs);
		void	makeSound( void ) const;
};


#endif