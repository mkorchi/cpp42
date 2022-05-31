/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:18:07 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/31 12:24:45 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	addCalled(PhoneBook& phoneBook) {
	Contact contact;
	
	std::cout << "ENTER FIRST NAME" << std::endl;
	std::cin >> contact.firstName;
	std::cout << "ENTER LAST NAME" << std::endl;
	std::cin >> contact.lastName;
	std::cout << "ENTER NICKNAME" << std::endl;
	std::cin >> contact.nickName;
	std::cout << "ENTER PHONE NUMBER" << std::endl;
	std::cin >> contact.phoneNumber;
	std::cout << "ENTER DARKEST SECRET" << std::endl;
	std::cin >> contact.darkestSecret;
	
	if (contact.firstName.empty() || contact.lastName.empty() || contact.nickName.empty() 
		|| contact.phoneNumber.empty() || contact.darkestSecret.empty())
		return ;
	phoneBook.addContact(contact);
}

void	printColumn(std::string str) {
	std::cout.flags (std::ios::right);
	std::cout.width(10);
	if (str.length() > 10) {
		str = str.substr(0, 10);
		str[9] = '.';
		std::cout << str << "|";
	} else {
		std::cout << str << "|";
	}
}

void	searchCalled(PhoneBook& phoneBook) {

	int	i;

	printColumn("index");
	printColumn("first name");
	printColumn("last name");
	printColumn("nickname");
	std::cout << std::endl;
	i = 0;
	std::cout.flags (std::ios::right);
	while (i < 8 && !phoneBook.contacts[i].firstName.empty()) {
		printColumn(std::to_string(i));
		printColumn(phoneBook.contacts[i].firstName);
		printColumn(phoneBook.contacts[i].lastName);
		printColumn(phoneBook.contacts[i].nickName);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter an index: " << std::endl;
	if (std::cin >> i) {
		if (i < 0 || i > 8 || phoneBook.contacts[i].firstName.empty()) {
			std::cout << "Index you just entered is either wrong or out of range" << std::endl;
		} else {
			phoneBook.contacts[i].displayInfo();
		}
	} else
		std::cin.ignore(INT_MAX);
}

int	main() {
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter your command (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0) {
			addCalled(phoneBook);
		}
		else if (input.compare("SEARCH") == 0) {
			searchCalled(phoneBook);
		}
		else if (input.compare("EXIT") == 0) {
			break ;
		}
	}

	return 0;
}