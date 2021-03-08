/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:57:52 by praclet           #+#    #+#             */
/*   Updated: 2021/03/07 11:40:20 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phone_book.hpp"
#include <iostream>
#include <string>

void add_data(std::string data_name, std::string *data)
{
	std::cout << "   Enter " << data_name << ": ";
	std::cin >> *data;
}

void add_contact(Phone_book *pb)
{
	Contact	ct;

	if (pb->is_full())
	{
		std::cout << "Phone book is full. Can't add any contact." << std::endl;
		return;
	}
	std::cout << "Adding a new contact." << std::endl;
	std::cout << "Please provide the following informations:" << std::endl;
	add_data("first name", &ct.first_name);
	add_data("last name", &ct.last_name);
	add_data("nickname", &ct.nickname);
	add_data("login", &ct.login);
	add_data("postal address", &ct.postal_address);
	add_data("email address", &ct.email_address);
	add_data("phone number", &ct.phone_number);
	add_data("birthday date", &ct.birthday_date);
	add_data("favorite meal", &ct.favorite_meal);
	add_data("underwear color", &ct.underwear_color);
	add_data("darkest secret", &ct.darkest_secret);
	pb->add(&ct);
	std::cout << "New contact added." << std::endl;
}

void search_contact(Phone_book *pb)
{
	(void)pb;
}

int main(void)
{
	std::string	cmd;
	char		end;
	Phone_book	pb;

	end = 0;
	std::cout << "Hi!" << std::endl;
	do
	{
		std::cout << "What next? > ";
		std::cin >> cmd;
		if (cmd == "SEARCH")
			search_contact(&pb);
		else
		{
			if (cmd == "ADD")
				add_contact(&pb);
			else
			{
				if (cmd == "EXIT")
					end = 1;
				else
				{
					std::cout << "Expected commands:" << std::endl;
					std::cout << "    ADD    : adds a contact" << std::endl;
					std::cout << "    SEARCH : searches a contact" << std::endl;
					std::cout << "    EXIT   : ends program" << std::endl;
				}
			}
		}
	}
	while (!end);
	std::cout << "Bye!" << std::endl;
	return (0);
}
