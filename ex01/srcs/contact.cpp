/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:42:01 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 10:52:52 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"

void print_data(std::ostream& os, std::string str)
{
	os << '|';
	if (str.length() > 10)
		os << str.substr(0,9) << '.';
	else
		os << std::setw(10) << str;
}

void Contact::printLine(std::ostream& os) const
{
	print_data(os, this->first_name);
	print_data(os, this->last_name);
	print_data(os, this->nickname);
}

void Contact::printDetails(void) const
{
	std::cout << "   First name : " << first_name << std::endl;
	std::cout << "   Last name : " << last_name << std::endl;
	std::cout << "   Nickname : " << nickname << std::endl;
	std::cout << "   Login : " << login << std::endl;
	std::cout << "   Postal adress : " << postal_address << std::endl;
	std::cout << "   Email adress : " << email_address << std::endl;
	std::cout << "   Phone number : " << phone_number << std::endl;
	std::cout << "   Birthday date : " << birthday_date << std::endl;
	std::cout << "   Favorite meal : " << favorite_meal << std::endl;
	std::cout << "   Underwear color : " << underwear_color << std::endl;
	std::cout << "   Darkest secret : " << darkest_secret << std::endl;
}
