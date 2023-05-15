/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:31:49 by jole              #+#    #+#             */
/*   Updated: 2023/05/15 20:13:00 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : current(0){
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact(PhoneBook phonebook) {
	phonebook.contacts[current].modifyContact();
	if (++current == 8)
		current = 0;
}
