/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:37:54 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 13:50:28 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP


# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>



class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
		
	public:
		ShrubberyCreationForm( void );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm( ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs);

		ShrubberyCreationForm( std::string target );
		virtual void execute(Bureaucrat const & executor) const;

};



#endif