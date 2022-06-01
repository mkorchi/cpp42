/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:12:37 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/01 11:48:41 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook ( void ) {
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::addContact() {
	Contact contact;
	int pos = PhoneBook::_len % 8;
	
	std::cout << "ENTER FIRST NAME" << std::endl;
	std::getline(std::cin, contact.firstName);
	std::cout << "ENTER LAST NAME" << std::endl;
	std::getline(std::cin, contact.lastName);
	std::cout << "ENTER NICKNAME" << std::endl;
	std::getline(std::cin, contact.nickName);
	std::cout << "ENTER PHONE NUMBER" << std::endl;
	std::getline(std::cin, contact.phoneNumber);
	std::cout << "ENTER DARKEST SECRET" << std::endl;
	std::getline(std::cin, contact.darkestSecret);

	if (contact.firstName.empty() || contact.lastName.empty() || contact.nickName.empty() 
		|| contact.phoneNumber.empty() || contact.darkestSecret.empty())
		return;

	this->contacts[pos] = contact;
	PhoneBook::_len++;
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

void PhoneBook::printList() {
	int	i;
	
	printColumn("index");
	printColumn("first name");
	printColumn("last name");
	printColumn("nickname");
	std::cout << std::endl;
	i = 0;
	std::cout.flags (std::ios::right);
	while (i < PhoneBook::_len && i < 8) {
		printColumn(std::to_string(i));
		printColumn(this->contacts[i].firstName);
		printColumn(this->contacts[i].lastName);
		printColumn(this->contacts[i].nickName);
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::search() {
	int	i;

	if (PhoneBook::_len == 0)
		return;

	std::cout << "Enter an index: " << std::endl;
	while (!(std::cin >> i) || (i < 0 || i > 7)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index you just entered is either wrong or out of range" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (i < PhoneBook::_len)
		this->contacts[i].displayInfo();
	else
		std::cout << "the contact with index " <<  i << " does not exist!" << std::endl;
}

int		PhoneBook::_len = 0;
