/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 18:08:39 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Form form("form1", 39, 40);
	
	Bureaucrat bob("bob", 40);
	// try 
	// {	
	// 	bob.decrementGrade();
	// }
	// catch (Bureaucrat::GradeTooLowException& e)
	// {
	// 	std::cout << e.whate() << std::endl;
	// }
	std::cout << bob << std::endl;

	bob.signForm(form);
	
}