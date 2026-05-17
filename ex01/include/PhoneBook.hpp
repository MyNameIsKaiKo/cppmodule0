/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 08:15:28 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 08:15:28 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class	PhoneBook 
{
	private :
		Contact _contacts[8];
		int	_contactsCount;

	public :
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string biggestSecret);
		void		displayContact(void);
		void		getContact(int index);
		std::string	checkString(std::string s);
};

#endif
