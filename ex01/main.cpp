/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:42:50 by jole              #+#    #+#             */
/*   Updated: 2023/05/11 19:40:39 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			i = 0;
	std::cout << "The phonebook is empty\n";
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT\n";
		std::cin >> input;
		if (input == "ADD")
		{
			phonebook.create_contact(&phonebook.contacts[i++]);	
		}
		if (input == "SEARCH")
		{

		}
		if (input == "EXIT")
			return (0);
		if (i == 9)
			i = 0;
	}
	return (0);
}
