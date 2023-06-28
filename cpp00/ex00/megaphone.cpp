/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <jole@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:10:59 by jole              #+#    #+#             */
/*   Updated: 2023/05/19 09:19:52 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	int	i = 0;
	int	x = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (argc > 1)
	{
		while (argv[x])
		{
			i = 0;
			while (argv[x][i] != 0)
			{
				argv[x][i] = toupper(argv[x][i]);
				i++;
			}
			std::cout << argv[x++];
		}
		std::cout << '\n';
	}
	return (0);
}
