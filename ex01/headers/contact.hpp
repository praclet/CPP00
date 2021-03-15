/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:43:31 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 10:34:25 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <ostream>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
		void printDetails(void);
		void printLine(std::ostream& os);
};

#endif
