/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:18:14 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/05 23:07:40 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

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
		int				SetFirstName(std::string firstName);
		int				SetLastName(std::string lastName);
		int				SetNickName(std::string nickName);
		int				SetLogin(std::string login);
		int				SetPostalAdress(std::string postalAdress);
		int				SetEmail(std::string email);
		int				SetPhoneNumber(std::string phoneNumber);
		int				SetBirthday(std::string birthday);
		int				SetFavoriteMeal(std::string favoriteMeal);
		int				SetUnderwearColor(std::string underwearColor);
		int				SetDarkestSecret(std::string darkestSecret);
		std::string		GetFirstName(void) const;
		std::string		GetLastName(void) const;
		std::string		GetNickName(void) const;
		std::string		GetLogin(void) const;
		std::string		GetPostalAdress(void) const;
		std::string		GetEmail(void) const;
		std::string		GetPhoneNumber(void) const;
		std::string		GetBirthday(void) const;
		std::string		GetFavoriteMeal(void) const;
		std::string		GetUnderwearColor(void) const;
		std::string		GetDarkestSecret(void) const;
};

#endif
