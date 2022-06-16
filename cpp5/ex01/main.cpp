/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:59:12 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 18:59:47 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Form form("form1", 39, 40);

	Bureaucrat bob("bob", 40);
	
	std::cout << form << std::endl;
	std::cout << bob << std::endl;

	bob.signForm(form);

	bob.incrementGrade();
	
	bob.signForm(form);
	
	std::cout << form << std::endl;
	
}