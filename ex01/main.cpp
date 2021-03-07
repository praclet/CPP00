/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:57:52 by praclet           #+#    #+#             */
/*   Updated: 2021/03/07 11:11:08 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phone_book.hpp"
#include <iostream>
#include <string>

void add_data(char *data_name, std::string *data)
{
	cout << "Enter " << data_name << ": ";
	cin >> *data;
}

void add_contact(Phone_book &pb)
{
	Contact	ct;

	if (pb->is_full())
	{
		cout << "Phone book is full. Can't add any contact." << std::endl;
		return;
	}
	cout << "Adding a new contact." << std::endl;
	cout << "Please provide the following informations:" << std::endl;
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
}

void search_contact(Phone_book &pb)
{
	;
}

int main(void)
{
	std::string	cmd;
	char		end;
	Phone_book	pb;

	end = 0;
	cout << "Hi!" << std:endl;
	do
	{
		cout << "What next? > ";
		cin >> cmd;
		switch (cmd)
		{
			case "SEARCH" :
				search_contact(&pb);
				break;
			case "ADD" :
				add_contact(&pb);
				break;
			case "EXIT" :
				end = 1;
				break;
			default :
				cout << "Expected commands:" << std:endl;
				cout << "    ADD    : adds a contact" << std:endl;
				cout << "    SEARCH : searches a contact" << std:endl;
				cout << "    EXIT   : ends program" << std:endl;
				break;
		};		
	}
	while (!end);
	cout << "Bye!" << std::endl;
	return (0);
}
