/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:42:50 by jole              #+#    #+#             */
/*   Updated: 2023/05/15 18:29:34y jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() {
	PhoneBook	phonebook;
	std::string	input;
	std::cout << "The phonebook is empty\n";
	while (1) {
		if (std::cin.eof() == 1) {
			break;
		}
		std::cout << "Please enter ADD, SEARCH or EXIT\n";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1) {
			break;
		}
		if (input == "ADD") {
			phonebook.addContact(phonebook);	
		}
		if (input == "SEARCH") {

		}
		if (input == "EXIT")
			return (0);
	}
	return (0);
}
