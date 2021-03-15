/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:37:33 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 10:31:04 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "contact.hpp"

class Phone_book
{
	public:
					Phone_book(void);
		int			is_full() const;
		void		add(Contact *contact);
		Contact*	getContact(std::size_t i) const;
		std::size_t	length(void) const;
	private:
		std::size_t		nb_contacts;
		Contact			phone_book[8];
};

#endif
