/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:57:52 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 11:14:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phone_book.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void add_data(std::string data_name, std::string *data)
{
	std::cout << "   Enter " << data_name << ": ";
	std::getline(std::cin, *data);
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
	int i;
	size_t j;
	const Contact	*tmp;
	std::string	input;

	if (pb->length() <=0)
	{
		std::cout << "Empty phone book!" << std::endl;	
		return ;
	}
	std::cout << std::setfill('-') << std::setw(45) << '-' << std::endl;
	std::cout << std::setfill(' ');
	std::cout << '|' << std::setw(10) << std::right << "Index";
	std::cout << '|' << std::setw(10) << std::right << "First name";
	std::cout << '|' << std::setw(10) << std::right << "Last name";
	std::cout << '|' << std::setw(10) << std::right << "Nickname";
	std::cout << '|' << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << '-' << std::endl;
	std::cout << std::setfill(' ') << std::right ;
	for (j=0;j < pb->length();j++)
	{
		std::cout << '|' << std::setw(10) << std::to_string(j);
		tmp = pb->getContact(j);
		if (tmp)
			tmp->printLine(std::cout);
		std::cout << '|' << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(45) << '-' << std::endl;
	std::cout << "Which contact do you wish to see? > ";
	std::getline(std::cin, input);
	i = std::atoi(input.c_str());
	j = i;
	if (!std::cin.good() || std::cin.eof() || i < 0 || j >= pb->length())
		std::cout << "Couldn't retrieve that user!" << std::endl;
	else
		pb->getContact((std::size_t)i)->printDetails();
}

void usage(void)
{
	std::cout << "Expected commands:" << std::endl;
	std::cout << "    ADD    : adds a contact" << std::endl;
	std::cout << "    SEARCH : searches a contact" << std::endl;
	std::cout << "    EXIT   : ends program" << std::endl;
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
		std::getline(std::cin, cmd);
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
					usage();
			}
		}
		if (!std::cin.good() || std::cin.eof())
		{
			std::cout << "Input error." << std::endl;
			end = 1;
		}
	}
	while (!end);
	std::cout << "Bye!" << std::endl;
	return (0);
}
