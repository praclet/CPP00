/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:57:03 by praclet           #+#    #+#             */
/*   Updated: 2021/01/29 16:48:18 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> 

int main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (i = 1;i < argc;i++)
		{
			str = argv[i];
			while(*str)
				std::cout << toupper(str++);
		}
	std::cout << std::endl;
	return (0);
}
