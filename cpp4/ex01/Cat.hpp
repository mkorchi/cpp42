/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 15:11:51 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const & src);
		Cat & operator=( Cat const & rhs);
		void	makeSound( void ) const ;
};


#endif