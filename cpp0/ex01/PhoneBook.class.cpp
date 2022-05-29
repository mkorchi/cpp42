/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:12:37 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/29 13:51:04 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
}

PhoneBook::~PhoneBook ( void ) {
}

void PhoneBook::addContact(Contact contact) {
	if (PhoneBook::_position == 8) {
		PhoneBook::_position = 0;
	}
	this->contacts[PhoneBook::_position] = contact;
	PhoneBook::_position++;
}

int		PhoneBook::_position = 0;
