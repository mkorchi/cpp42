/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:13:21 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/29 12:38:10 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#include <iostream>

Contact::Contact( void ) {
	//std::cout << "Constructor called" << std::endl;
}

Contact::~Contact ( void ) {
	//std::cout << "Destructor called" << std::endl;
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string dark )
	: firstName(first), lastName(last), nickName(nick), phoneNumber(phone), darkestSecret(dark) {
	
}