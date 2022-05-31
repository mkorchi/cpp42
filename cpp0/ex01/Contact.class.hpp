/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:35:03 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/31 11:53:07 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP

# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact
{

public:
	Contact( void );
	~Contact();

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	void displayInfo();
	
};



#endif