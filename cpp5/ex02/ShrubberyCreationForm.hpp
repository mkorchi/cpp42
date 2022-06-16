/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:37:54 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 15:02:44 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP


# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	
	public:
		ShrubberyCreationForm( void );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm( ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs);

		ShrubberyCreationForm( std::string name );
		virtual void execute(Bureaucrat const & executor) const;

};



#endif