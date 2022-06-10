/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:27:21 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:30:10 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP

# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
		
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( WrongCat const & src);
		WrongCat & operator=( WrongCat const & rhs);
		void	makeSound( void ) const ;
};


#endif