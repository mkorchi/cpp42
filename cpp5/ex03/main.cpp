/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 15:48:49 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	//AForm form("form1", 39, 40); we cant instantiate  Afrom because its abstract

	//AForm *form = new ShrubberyCreationForm("targert");
	// AForm *form = new RobotomyRequestForm("targert");
	AForm *form = new PresidentialPardonForm("targert");
	
	Bureaucrat bob("bob", 5);
	
	bob.signForm(*form);
	bob.executeForm(*form);
	
	
	delete form;
	
	
	return 0;
}