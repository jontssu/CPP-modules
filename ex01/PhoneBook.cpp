/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:05:45 by jole              #+#    #+#             */
/*   Updated: 2023/05/11 19:53:12 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::create_contact(Contact *contact)
{
	std::string	input;
	std::cout << "Add first name\n";
	std::cin >> input;
	contact->first_name = input;
	std::cout << "Add last name\n";
	std::cin >> input;
	contact->last_name = input;
	std::cout << "Add nickname\n";
	std::cin >> input;
	contact->nickname = input;
	std::cout << "Add phonenumber\n";
	std::cin >> input;
	contact->phone_number = input;
	std::cout << "Add their darkest secret\n";
	std::cin >> input;
	contact->darkest_secret = input;
}
