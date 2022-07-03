/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:26:38 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 13:43:53 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const & src);
		Cat & operator=( Cat const & rhs);
		void	makeSound( void ) const ;

		Brain *getBrain( void );
};


#endif