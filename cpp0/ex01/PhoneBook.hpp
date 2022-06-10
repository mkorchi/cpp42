/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:58:57 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 09:31:28 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	
	public:
		PhoneBook( void );
		~PhoneBook( void );

		void addContact( void );
		void printList( void );
		void search( void );

		
	private:
		Contact	contacts[8];
		static int	_len;
		static void	printColumn( std::string str );
};



#endif