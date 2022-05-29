/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:18:07 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/29 15:42:46 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

#include <fstream>
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
	std::cout << str << "|";
}

void	searchCalled(PhoneBook& PhoneBook)
{
	int	i;

	//std::cout << "     index|" << "first name|" << " last name|" << "  nickname" << std::endl;
	printColumn("index");
	printColumn("first name");
	printColumn("last name");
	printColumn("nickname");
	std::cout << std::endl;
	i = 0;
	std::cout.flags (std::ios::right);
	while (i < 8 && !PhoneBook.contacts[i].firstName.empty()) {
		printColumn(std::to_string(i));
		printColumn(PhoneBook.contacts[i].firstName);
		printColumn(PhoneBook.contacts[i].lastName);
		printColumn(PhoneBook.contacts[i].nickName);
		std::cout << std::endl;
		i++;
	}
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
			std::cout << "EXIT" << std::endl;
			break ;
		}
	}

	return 0;
}