/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:13:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:38:19 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( Animal const & src);
		Animal & operator=( Animal const & rhs);

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
		
};


#endif