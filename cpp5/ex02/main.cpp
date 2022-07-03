/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/03 13:44:40 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	//AForm form("form1", 39, 40); we cant instantiate  Afrom because its abstract

	AForm *form = new ShrubberyCreationForm("target"); // 145 - 137
	AForm *form2 = new RobotomyRequestForm("target"); // 72 - 45
	AForm *form3 = new PresidentialPardonForm("target"); // 25 - 5


	// TEST 1
	Bureaucrat a("a", 146);
	Bureaucrat b("b", 136);

	a.signForm(*form);
	b.executeForm(*form);

	a.incrementGrade();

	a.signForm(*form);
	b.executeForm(*form);
	std::cout << "******************************" << std::endl;
	
	//TEST 2
	Bureaucrat bob("bob", 5);
	Bureaucrat simo("simo", 25);
	
	simo.signForm(*form3);
	bob.executeForm(*form3);
	std::cout << "******************************" << std::endl;

	// TEST 3
	Bureaucrat foo("foo", 72);
	Bureaucrat bar("bar", 45);

	foo.signForm(*form2);
	bar.executeForm(*form2);
	
	std::cout << "******************************" << std::endl;
	
	delete form;
	delete form2;
	delete form3;
	
	
	return 0;
}