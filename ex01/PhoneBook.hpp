/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:15:26 by jole              #+#    #+#             */
/*   Updated: 2023/05/15 18:09:03 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		current;
	public:
		void addContact(PhoneBook phonebook);
		PhoneBook();
		~PhoneBook();
};
#endif
