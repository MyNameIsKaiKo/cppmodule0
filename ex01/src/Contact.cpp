/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 08:57:21 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 08:57:21 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int Contact::getIndex()
{
	return (this->_index);
}

int	Contact::getHidden()
{ return (this->_hidden); }

std::string	Contact::getPhoneNumber()
{ return (this->_phoneNumber); }

std::string Contact::getFirstName()
{ return (this->_firstName); }

std::string Contact::getLastName()
{ return (this->_lastName); }

std::string Contact::getNickName()
{ return (this->_nickName); }

std::string Contact::getBiggestSecret()
{ return (this->_biggestSecret); }

void	Contact::setIndex(int index)
{
	this->_index = index;
	return ;
}

void	Contact::setHidden(int hidden)
{
	this->_hidden = hidden;
	return ;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	while (phoneNumber.length() != 10)
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << "|       WROND PHONE NUMBER|";
		std::cout << "---------------------------" << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
	return ;
}

void	Contact::setBiggestSecret(std::string biggestSecret)
{
	this->_biggestSecret = biggestSecret;
	return ;
}
