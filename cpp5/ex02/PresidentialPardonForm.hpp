/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:12:02 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 19:23:31 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		
	public:
		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const & src);
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs);

		PresidentialPardonForm( std::string target );
		virtual void execute(Bureaucrat const & executor) const;
};


#endif