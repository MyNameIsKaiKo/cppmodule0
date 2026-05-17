/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 08:30:59 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 08:30:59 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private :
		int			_index;
		int			_hidden;
		std::string	_phoneNumber;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string	_biggestSecret;

	public:
		Contact();
		~Contact();
		void		setIndex(int index);
		void		setHidden(int hidden);
		void		setPhoneNumber(std::string phoneNumber);
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setBiggestSecret(std::string biggestSecret);
		int			getIndex(void);
		int			getHidden(void);
		std::string	getPhoneNumber(void);
		std::string	getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string	getBiggestSecret(void);
};

#endif
