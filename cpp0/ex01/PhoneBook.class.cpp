/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:12:37 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/28 20:13:39 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook ( void ) {
	std::cout << "Destructor called" << std::endl;
}