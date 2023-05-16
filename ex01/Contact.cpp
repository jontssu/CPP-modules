/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:29:58 by jole              #+#    #+#             */
/*   Updated: 2023/05/16 15:58:02 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int	Contact::setFirst(std::string input) {
	while (1) {
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return (1);
		}
		if (input.empty()) {
			std::cout << "Line is empty!\n";
			continue;
		}
		break;
	}
	first_name = input;
	return (0);
}

int	Contact::setLast(std::string input) {
	while (1) {
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return (1);
		}
		if (input.empty()) {
			std::cout << "Line is empty!\n";
			continue;
		}
		break;
	}
	last_name = input;
	return (0);
}

int	Contact::setNick(std::string input) {
	while (1) {
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return (1);
		}
		if (input.empty()) {
			std::cout << "Line is empty!\n";
			continue;
		}
		break;
	}
	nickname = input;
	return (0);
}

int	Contact::setNb(std::string input) {
	while (1) {
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return (1);
		}
		if (input.empty()) {
			std::cout << "Line is empty!\n";
			continue;
		}
		break;
	}
	phone_number = input;
	return (0);
}

int	Contact::setSecret(std::string input) {
	while (1) {
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			return (1);
		}
		if (input.empty()) {
			std::cout << "Line is empty!\n";
			continue;
		}
		break;
	}
	darkest_secret = input;
	return (0);
}

std::string	Contact::getFirst() {
	return (first_name);
}

std::string	Contact::getLast() {
	return (last_name);
}

std::string	Contact::getNick() {
	return (nickname);
}

std::string	Contact::getNb() {
	return (phone_number);
}

std::string	Contact::getSecret() {
	return (darkest_secret);
}