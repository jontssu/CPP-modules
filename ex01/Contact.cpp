/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:29:58 by jole              #+#    #+#             */
/*   Updated: 2023/05/15 20:13:16 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::modifyContact() {
	std::string input;
	if (setFirst(input) == 1) {
		return;
	}
	if (setLast(input) == 1) {
		return;
	}
	if (setNick(contact, input) == 1) {
		return;
	}
	if (setNb(contact, input) == 1) {
		return;
	}
	if (setSecret(contact, input) == 1) {
		return;
	}
}

int	Contact::setFirst(Contact *contact, std::string input) {
	std::cout << "First name: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1) {
		return (1);
	}
	contact->first_name = input;
	return (0);
}

int	Contact::setLast(Contact *contact, std::string input) {
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1) {
		return (1);
	}
	contact->first_name = input;
	return (0);
}

int	Contact::setNick(Contact *contact ,std::string input) {
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1) {
		return (1);
	}
	contact->first_name = input;
	return (0);
}

int	Contact::setNb(Contact *contact, std::string input) {
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1) {
		return (1);
	}
	contact->first_name = input;
	return (0);
}

int	Contact::setSecret(Contact *contact, std::string input) {
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1) {
		return (1);
	}
	contact->darkest_secret = input;
	return (0);
}