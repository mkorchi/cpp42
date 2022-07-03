/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:23 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/03 12:09:01 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		
	public:
		Bureaucrat( std::string name, int grade );
		
		Bureaucrat( void );
		virtual ~Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);

		void	incrementGrade( void );
		void	decrementGrade( void );

		std::string getName( void ) const;
		int			getGrade( void ) const ;
		

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i);


#endif