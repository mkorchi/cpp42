/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 19:46:56 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	//AForm form("form1", 39, 40); we cant instantiate  Afrom because its abstract

	AForm *form = new ShrubberyCreationForm("targert");
	
	Bureaucrat bob("bob", 145);
	
	bob.signForm(*form);
	bob.executeForm(*form);
	
	
	delete form;
	
	
	return 0;
}