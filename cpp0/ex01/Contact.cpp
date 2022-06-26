/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:57:05 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/25 14:32:33 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact ( void )
{
	std::cout << "Contact Destructor called" << std::endl;
}

void	Contact::displayInfo()
{
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}

void		Contact::setFirstName( std::string first )
{
	this->_firstName = first;
}

std::string	Contact::getFirstName( void )
{
	return this->_firstName;
}

void		Contact::setLasName( std::string last )
{
	this->_lastName = last;
}

std::string	Contact::getLastName( void )
{
	return this->_lastName;
}

void		Contact::setNickName( std::string nick )
{
	this->_nickName = nick;
}

std::string	Contact::getNickName( void )
{
	return this->_nickName;
}

void		Contact::setPhoneNumber( std::string number )
{
	this->_phoneNumber = number;
}

std::string	Contact::getPhoneNumber( void )
{
	return this->_phoneNumber;
}

void		Contact::setDarkestSecret( std::string dark )
{
	this->_darkestSecret = dark;
}

std::string	Contact::getDarkestSecret( void )
{
	return this->_darkestSecret;
}
