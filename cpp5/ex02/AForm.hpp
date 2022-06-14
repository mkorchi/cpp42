/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:56:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 19:03:09 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP



# define AFORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

		
	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);

		AForm( void );
		~AForm( void );
		AForm( AForm const & src);
		AForm & operator=( AForm const & rhs);

		
		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;


		void		beSigned(Bureaucrat const &	 b);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream &	operator<<( std::ostream o, AForm const & i);


#endif