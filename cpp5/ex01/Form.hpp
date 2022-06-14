/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:57:50 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 18:00:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP



# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

		
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);

		Form( void );
		~Form( void );
		Form( Form const & src);
		Form & operator=( Form const & rhs);

		
		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGradeToSign( void ) const;
		int		getGradeToExecute( void ) const;


		void		beSigned(Bureaucrat const &	 b);
		
};

std::ostream &	operator<<( std::ostream o, Form const & i);


#endif