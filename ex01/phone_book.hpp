/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:37:33 by praclet           #+#    #+#             */
/*   Updated: 2021/01/31 09:16:25 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "contact.hpp"

class Phone_book.hpp
{
	public:
				Phone_book(void) : nb_contacts(0)
				{};
		int		is_full()
				{return (nb_contacts < 8);};
		void	add(Contact contact)
				{phone_book[nb_contact++] = contact;};
		contact& operator[](std::size_t i)
				{return (phone_book[i]);};
		const contact& operator[](std::size_t i) const
				{return (phone_book[i]);};

	private:
		int		nb_contacts;
		Contact	phone_book[8];
};

#endif
