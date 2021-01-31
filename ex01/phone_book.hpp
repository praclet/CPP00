/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:37:33 by praclet           #+#    #+#             */
/*   Updated: 2021/01/31 09:49:30 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "contact.hpp"

class Phone_book
{
	public:
				Phone_book(void) : nb_contacts(0)
				{
				};
		int		is_full() const
				{
					return (nb_contacts >= sizeof(phone_book)/sizeof(*phone_book));
				};
		void	add(Contact contact)
				{
					if (nb_contacts < sizeof(phone_book)/sizeof(*phone_book))
						phone_book[nb_contacts++] = contact;
				};
		Contact& operator[](std::size_t i)
				{
					return (i < nb_contacts ? phone_book[i] : vide);
				};
		const Contact& operator[](std::size_t i) const
				{
					return (i < nb_contacts ? phone_book[i] : vide);
				};
	private:
		static Contact	vide;
		std::size_t		nb_contacts;
		Contact			phone_book[8];
};

#endif
