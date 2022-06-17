/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:27 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 15:42:16 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFROM_HPP

# define ROBOTOMYREQUESTFROM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const & src);
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs);

		RobotomyRequestForm( std::string target );
		virtual void execute(Bureaucrat const & executor) const;
};




#endif