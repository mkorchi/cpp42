/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/21 03:36:42 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	
	Bureaucrat bob("bob", 5);
	

	Intern intern;
	AForm	*form;
	AForm	*form2;
	AForm	*form3;

	form = intern.makeForm("ShrubberyCreation", "targer1");
	form2 = intern.makeForm("RobotomyRequestForm", "targer2");
	form3 = intern.makeForm("PresidentialPardonForm", "targer3");
	
	bob.signForm(*form);
	bob.executeForm(*form);
	std::cout  << "********************" << std::endl;
	
	bob.signForm(*form2);
	bob.executeForm(*form2);
	std::cout  << "********************" << std::endl;
	
	bob.signForm(*form3);
	bob.executeForm(*form3);
	std::cout << "********************" << std::endl;

	
	std::cout << *form << std::endl;


	delete form;
	delete form2;
	delete form3;
	
	
	return 0;
}