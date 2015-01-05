/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:08:43 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 00:33:50 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include "Contact.class.hpp"

class PhoneBook {
	public :
		int	 	AddContact(void);
		int		Search(void);
		PhoneBook(void);
		~PhoneBook(void);
	private :
		Contact contacts[8];
		int contactCounter;
		std::string userInput(std::string msg);
		void displaySearch(int i);
		void dispContact(int i);
};

#endif
