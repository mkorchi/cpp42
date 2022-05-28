/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:13:21 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/28 20:14:05 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#include <iostream>

Contact::Contact( void ) {
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact ( void ) {
	std::cout << "Destructor called" << std::endl;
}