/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:17:45 by jole              #+#    #+#             */
/*   Updated: 2023/05/15 20:10:27 by jole             ###   ########.fr       */
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
		void modifyContact(Contact *contact);
		int	 setFirst(Contact *contact, std::string First);
		int	 setLast(Contact *contact, std::string last);
		int	 setNick(Contact *contact, std::string nick);
		int	 setNb(Contact *contact, std::string nb);
		int	 setSecret(Contact *contact, std::string secret);
};
#endif
