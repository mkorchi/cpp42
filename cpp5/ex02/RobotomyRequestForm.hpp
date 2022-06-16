/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:27 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 15:13:07 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFROM_HPP

# define ROBOTOMYREQUESTFROM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	public:
		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const & src);
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

		RobotomyRequestForm( std::string name );
		virtual void execute(Bureaucrat const & executor) const;
};




#endif