/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:18:14 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/05 17:54:52 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string postalAdress;
		std::string email;
		std::string phoneNumber;
		std::string birthday;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		int				setFirstName(std::string firstName);
		int				setLastName(std::string lastName);
		int				setNickName(std::string nickName);
		int				setLogin(std::string login);
		int				setPostalAdress(std::string postalAdress);
		int				setEmail(std::string email);
		int				setPhoneNumber(std::string phoneNumber);
		int				setBirthday(std::string birthday);
		int				setFavoriteMeal(std::string favoriteMeal);
		int				setUnderwearColor(std::string underwearColor);
		int				setDarkestSecret(std::string darkestSecret);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickName(void);
		std::string		getLogin(void);
		std::string		getPostalAdress(void);
		std::string		getEmail(void);
		std::string		getPhoneNumber(void);
		std::string		getBirthday(void);
		std::string		getFavoriteMeal(void);
		std::string		getUnderwearColor(void);
		std::string		getDarkestSecret(void);
}

#endif
