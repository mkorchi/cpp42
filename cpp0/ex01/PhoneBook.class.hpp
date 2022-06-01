/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:12:40 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/01 09:19:09 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP

# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook {
	
public:
	PhoneBook(void);
	~PhoneBook();

	void addContact(void);
	void printList(void);
	void search(void);

	
private:
	Contact	contacts[8];
	static int	_len;
};





#endif