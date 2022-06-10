/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:43:29 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 14:52:52 by mkorchi          ###   ########.fr       */
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
		std::string ideas[SIZE];
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const & src);
		Brain & operator=(Brain const & rhs);
};




#endif