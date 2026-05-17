/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 10:03:36 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 10:03:36 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void	addPhoneBook(PhoneBook *pb)
{
	std::string firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string biggestSecret;

	std::cout << "---------------------------" << std::endl;
	std::cout << "|         ENTER FIRST NAME|" << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "|          ENTER LAST NAME|" << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "|           ENTER NICKNAME|" << std::endl;
	std::getline(std::cin, nickName);
	std::cout << "|       ENTER PHONE NUMBER|" << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "| ENTER THE DARKEST SECRET|" << std::endl;
	std::getline(std::cin, biggestSecret);
	std::cout << "---------------------------" << std::endl;
	pb->addContact(firstName, lastName,  nickName, phoneNumber, biggestSecret);
}

void	searchPhoneBook(PhoneBook *pb)
{
	int	i;

	pb->displayContact();
	std::cout << "---------------------------" << std::endl;
	std::cout << "|              ENTER INDEX|" << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cin >> i;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	pb->getContact(i);
}

int	main(void)
{
	PhoneBook pb;
	std::string input;

	while (1)
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << "|    ADD, SEARCH OR EXIT..|" << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			addPhoneBook(&pb);
		else if (input == "SEARCH")
			searchPhoneBook(&pb);
		else if (input == "EXIT")
			return (0);
		else
		{
			std::cout << "---------------------------" << std::endl;
			std::cout << "!          WRONG ARGUMENTS!" << std::endl;
			std::cout << "---------------------------" << std::endl;
		}
	}
	return (0);
}
