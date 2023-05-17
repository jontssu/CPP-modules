/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:31:49 by jole              #+#    #+#             */
/*   Updated: 2023/05/16 16:03:01 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : current(0), amount(0) {
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact() {
	std::string input;
	if (contacts[current].setFirst(input) == 1) {
		return;
	}
	if (contacts[current].setLast(input) == 1) {
		return;
	}
	if (contacts[current].setNick(input) == 1) {
		return;
	}
	if (contacts[current].setNb(input) == 1) {
		return;
	}
	if (contacts[current].setSecret(input) == 1) {
		return;
	}
}

void	PhoneBook::incrementCurrent() {
	current += 1;
	if (current == 8)
		current = 0;
	if (amount < 8)
		amount += 1;
}

void PhoneBook::displayContacts() {
	std::string str;

	std::cout << std::right << std::setw(10) << "Index";
	std::cout << std::right << std::setw(10) << "First";
	std::cout << std::right << std::setw(10) << "Last";
	std::cout << std::right << std::setw(10) << "Nick" << std::endl;
	for (int i = 0; i < amount; i++) {
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i + 1;
		std::cout << "|";
		str = contacts[i].getFirst().substr(0,11);
		if (str.size() > 10) {
			str[9] = '.';
		}
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
		std::cout << "|";
		str = contacts[i].getLast().substr(0,11);
		if (str.size() > 10) {
			str[9] = '.';
		}
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
		std::cout << "|";
		str = contacts[i].getNick().substr(0,11);
		if (str.size() > 10) {
			str[9] = '.';
		}
		std::cout << std::right << std::setw(10) << str.substr(0, 10);
		std::cout << "|" << std::endl;
	}
}

void PhoneBook::chooseContact() {
	std::string input;
	const char *str;
	int			index;
	while (1) {
		std::cout << "Please choose an index: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return;
		}
		if (input.empty()) {
			std::cout << "Empty index!\n";
			continue;
		}
		str = input.c_str();
		index = atoi(str);
		if (index < 1 || index > 8 || index > amount) {
			std::cout << "Incorrect index!\n";
			continue;
		}
		break;
	}
	std::cout << "First name: " << contacts[index - 1].getFirst() << "\n";
	std::cout << "Last name: " << contacts[index - 1].getLast() << "\n";
	std::cout << "Nickname: " << contacts[index - 1].getNick() << "\n";
	std::cout << "Phone number: " << contacts[index - 1].getNb() << "\n";
	std::cout << "Their darkest secret: " << contacts[index - 1].getSecret() << "\n";
}