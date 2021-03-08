/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:37:33 by praclet           #+#    #+#             */
/*   Updated: 2021/03/08 13:53:46 by praclet          ###   ########lyon.fr   */
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
		int	is_full() const
			{
				return (nb_contacts >= sizeof(phone_book)/sizeof(phone_book[0]));
			};
		void	add(Contact *contact)
			{
				if (!this->is_full())
					phone_book[nb_contacts++] = *contact;
			};
		Contact*	getContact(std::size_t i)
			{
				return (i < nb_contacts ? phone_book + i : NULL);
			};
		std::size_t	length(void) const
			{
				return (nb_contacts);
			};
	private:
		std::size_t		nb_contacts;
		Contact			phone_book[8];
};

#endif
