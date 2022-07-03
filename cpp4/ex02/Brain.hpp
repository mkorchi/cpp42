/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:43:29 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/02 12:24:51 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP
# include <iostream>
# include <string>

# define SIZE 100

class Brain
{
	private:
		std::string _ideas[SIZE];
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const & src);
		Brain & operator=(Brain const & rhs);

		std::string getIdea(int pos);
		void		setIdea(int pos, std::string const &idea);
};




#endif