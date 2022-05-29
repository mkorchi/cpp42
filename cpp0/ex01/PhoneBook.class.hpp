/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:12:40 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/29 13:53:38 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP

# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook {
	
public:
	PhoneBook( void );
	~PhoneBook();

	Contact	contacts[8];

	void addContact(Contact contact);
	
private:
	static int	_position;
};





#endif