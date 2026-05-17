/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 09:08:49 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 09:08:49 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactsCount(0)
{
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string biggestSecret)
{
	int	i;
	int	bigHidden;
	int	lowHidden;

	i = 0;
	bigHidden = 0;
	if (this->_contactsCount == 8)
	{
		lowHidden = this->_contacts[i].getHidden();
		while (i < this->_contactsCount)
		{
			if (bigHidden < this->_contacts[i].getHidden())
				bigHidden = this->_contacts[i].getHidden();
			if (lowHidden > this->_contacts[i].getHidden())
				lowHidden = this->_contacts[i].getHidden();
			i++;
		}
		i = 0;
		while (this->_contacts[i].getHidden() != lowHidden)
			i++;
		this->_contacts[i].setIndex(i + 1);
		this->_contacts[i].setHidden(bigHidden + 1);
	}
	else
	{
		while (i < this->_contactsCount)
			i++;
		this->_contacts[i].setHidden(i);
		this->_contacts[i].setIndex(i + 1);
		this->_contactsCount += 1;
	}
	this->_contacts[i].setPhoneNumber(phoneNumber);
	this->_contacts[i].setFirstName(firstName);
	this->_contacts[i].setLastName(lastName);
	this->_contacts[i].setNickName(nickName);
	this->_contacts[i].setBiggestSecret(biggestSecret);
}

void	PhoneBook::getContact(int index)
{

	if (index <= 0 || index > 8)
	{
		std::cout << std::setw(10);
		std::cout << "Wrong Id" << std::endl;
		return ;
	}
	index -= 1;
	std::cout << std::setw(44) << std::setfill ('_')<< "_" << std::endl;
	std::cout << this->_contacts[index].getIndex() << std::endl;
	std::cout << this->_contacts[index].getFirstName() << std::endl;
	std::cout << this->_contacts[index].getLastName() << std::endl;
	std::cout << this->_contacts[index].getNickName() << std::endl;
	std::cout << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[index].getBiggestSecret() << std::endl;
	std::cout << std::setw(44) << std::setfill ('_')<< "_" << std::endl;
	return ;
}

std::string	PhoneBook::checkString(std::string s)
{
	std::string output;

	if (s.length() > 10)
	{
		output = s.substr(0, 10);
		output[9] = '.';
	}
	else
		output = s;
	return (output);
}

void	PhoneBook::displayContact()
{
	int			i;
	std::string output;

	i = 0;
	while(i < this->_contactsCount)
	{
		std::cout << std::setw(44) << std::setfill ('_')<< "_" << std::endl;
		std::cout << std::setw(10) << std::setfill (' ') << this->_contacts[i].getIndex() << "|";
		output = checkString(this->_contacts[i].getFirstName());
		std::cout << std::setw(10) << std::setfill (' ') << output << "|";
		output = checkString(this->_contacts[i].getLastName());
		std::cout << std::setw(10) << std::setfill (' ') << output << "|";
		output = checkString(this->_contacts[i].getNickName());
		std::cout << std::setw(10) << std::setfill (' ') << output << "|" << std::endl;
		std::cout << std::setw(44) << std::setfill ('-')<< "-" << std::endl;
		i++;
	}
	return ;
}
