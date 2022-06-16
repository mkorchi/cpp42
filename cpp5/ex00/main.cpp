/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 16:56:08 by mkorchi          ###   ########.fr       */
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
		std::cout << e.what() << std::endl;
	}

	Bureaucrat sfn("sfn", 2);
	try 
	{	
		sfn.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sfn << std::endl;
	
}