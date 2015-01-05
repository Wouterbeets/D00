/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:08:43 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/05 17:59:12 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include "Contact.class.hpp"

class PhoneBook {
	public :
		void Add(void);
		void Search(void);
		PhoneBook(void);
		~PhoneBook(void);
	private :
		Contact[8] contacts;		
		int contactCounter;
}

#endif
