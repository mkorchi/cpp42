/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:18:07 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/01 09:13:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int	main() {
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter your command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			phoneBook.addContact();
		}
		else if (input.compare("SEARCH") == 0) {
			phoneBook.printList();
			phoneBook.search();
		}
		else if (input.compare("EXIT") == 0) {
			break ;
		}
	}

	return 0;
}