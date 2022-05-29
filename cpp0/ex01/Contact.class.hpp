/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:35:03 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/29 12:26:30 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP

# define CONTACT_CLASS_HPP

#include <string>

class Contact
{

public:
	Contact( void );
	Contact( std::string first, std::string last, std::string nick, std::string phone, std::string dark);
	~Contact();

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	
};



#endif