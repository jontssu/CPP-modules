/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:17:45 by jole              #+#    #+#             */
/*   Updated: 2023/05/16 15:58:23 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;	
	public:
		int	 setFirst(std::string First);
		int	 setLast(std::string last);
		int	 setNick(std::string nick);
		int	 setNb(std::string nb);
		int	 setSecret(std::string secret);
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getNb();
		std::string	getSecret();
		Contact();
		~Contact();
};
#endif
