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

int	isValidString(std::string s)
{
	int	i;

	i = 0;
	if (s == "\0" || s.empty())
		return (0);
	while (s[i])
	{
		if (!std::isspace((s[i])))
			return (1);
	}
	return (0);
}

void	addPhoneBook(PhoneBook *pb)
{
	std::string firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string biggestSecret;

	std::cout << "---------------------------" << std::endl;
	while (!isValidString(firstName))
	{
		std::cout << "|         ENTER FIRST NAME|" << std::endl;
		std::getline(std::cin, firstName);
	}
	while (!isValidString(lastName))
	{
		std::cout << "|          ENTER LAST NAME|" << std::endl;
		std::getline(std::cin, lastName);
	}
	while (!isValidString(nickName))
	{
		std::cout << "|           ENTER NICKNAME|" << std::endl;
		std::getline(std::cin, nickName);
	}
	while (!isValidString(phoneNumber))
	{
		std::cout << "|       ENTER PHONE NUMBER|" << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	while (!isValidString(biggestSecret))
	{
		std::cout << "| ENTER THE DARKEST SECRET|" << std::endl;
		std::getline(std::cin, biggestSecret);
	}
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
		if (input == "\0")
			continue ;
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
