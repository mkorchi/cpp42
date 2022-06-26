/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:58:46 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 14:08:49 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void )
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook ( void )
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void PhoneBook::addContact()
{
	Contact		contact;
	std::string temp;
	int pos = PhoneBook::_len % 8;
	
	std::cout << "ENTER FIRST NAME" << std::endl;
	std::getline(std::cin, temp);
	contact.setFirstName(temp);
	
	std::cout << "ENTER LAST NAME" << std::endl;
	std::getline(std::cin, temp);
	contact.setLasName(temp);
	
	std::cout << "ENTER NICKNAME" << std::endl;
	std::getline(std::cin, temp);
	contact.setNickName(temp);
	
	std::cout << "ENTER PHONE NUMBER" << std::endl;
	std::getline(std::cin, temp);
	contact.setPhoneNumber(temp);
	
	std::cout << "ENTER DARKEST SECRET" << std::endl;
	std::getline(std::cin, temp);
	contact.setDarkestSecret(temp);

	if (contact.getFirstName().empty() || contact.getLastName().empty() || contact.getNickName().empty() 
		|| contact.getPhoneNumber().empty() || contact.getDarkestSecret().empty())
		return;

	this->contacts[pos] = contact;
	PhoneBook::_len++;
}

void	PhoneBook::printColumn( std::string str )
{
	std::cout.flags (std::ios::right);
	std::cout.width(10);
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
		std::cout << str << "|";
	}
	else
	{
		std::cout << str << "|";
	}
}

void PhoneBook::printList()
{
	int	i;
	
	PhoneBook::printColumn("index");
	PhoneBook::printColumn("first name");
	PhoneBook::printColumn("last name");
	PhoneBook::printColumn("nickname");
	std::cout << std::endl;
	i = 0;
	std::cout.flags (std::ios::right);
	while (i < PhoneBook::_len && i < 8)
	{
		PhoneBook::printColumn(std::to_string(i));
		PhoneBook::printColumn(this->contacts[i].getFirstName());
		PhoneBook::printColumn(this->contacts[i].getLastName());
		PhoneBook::printColumn(this->contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::search()
{
	int	i;

	if (PhoneBook::_len == 0)
		return;

	std::cout << "Enter an index: " << std::endl;
	while (!(std::cin >> i) || (i < 0 || i > 7))
	{
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
