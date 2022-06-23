/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:57:08 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/23 16:32:07 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		Contact( void );
		~Contact();
		
		void		setFirstName( std::string first );
		std::string	getFirstName( void );

		void		setLasName( std::string last );
		std::string	getLastName( void );

		void		setNickName( std::string nick );
		std::string	getNickName( void );

		void		setPhoneNumber( std::string number );
		std::string	getPhoneNumber( void );

		void		setDarkestSecret( std::string dark );
		std::string	getDarkestSecret( void );

		void displayInfo();
	
};

#endif