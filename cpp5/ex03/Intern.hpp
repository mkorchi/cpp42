/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:50:19 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 16:00:02 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP


# define INTERN_HPP
# include <string>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"



class Intern
{
	private:
		std::string forms[3];
	public:
		Intern( void );
		virtual ~Intern( void );
		Intern( Intern const & src);
		Intern & operator=( Intern const & rhs);


		AForm*	makeForm(std::string formName, std::string target);
};




#endif