/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/13 08:31:31 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bob("bob", 150);
	std::cout << bob << std::endl;

	try 
	{	
		bob.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.whate() << std::endl;
	}

	Bureaucrat sfn("sfn", 2);
	try 
	{	
		sfn.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.whate() << std::endl;
	}

	std::cout << sfn << std::endl;
	
}