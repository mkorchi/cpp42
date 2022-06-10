/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:26:02 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:38:27 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP

# define WRONG_ANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
		
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src);
		WrongAnimal & operator=( WrongAnimal const & rhs);

		void	makeSound( void ) const;
		std::string		getType( void ) const;
		
};


#endif