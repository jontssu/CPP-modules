/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:15:26 by jole              #+#    #+#             */
/*   Updated: 2023/05/18 12:23:03 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		current;
		int		amount;
		void incrementCurrent();
	public:
		void addContact();
		void displayContacts();
		void chooseContact();
		PhoneBook();
		~PhoneBook();
};
#endif
