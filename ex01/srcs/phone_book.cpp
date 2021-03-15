/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:26:16 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 10:49:14 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"
#include "contact.hpp"

Phone_book::Phone_book(void) : nb_contacts(0)
{
};

int	Phone_book::is_full() const
{
	return (nb_contacts >= sizeof(phone_book)/sizeof(phone_book[0]));
};

void	Phone_book::add(Contact *contact)
{
	if (!this->is_full())
		phone_book[nb_contacts++] = *contact;
};

const Contact*	Phone_book::getContact(std::size_t i) const
{
	return (i < nb_contacts ? phone_book + i : NULL);
};

std::size_t	Phone_book::length(void) const
{
	return (nb_contacts);
};
