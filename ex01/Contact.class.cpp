/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 21:11:00 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 00:41:17 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.class.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

int				Contact::SetFirstName(std::string firstName){
	this->firstName = firstName;
	return 1;
}

int				Contact::SetLastName(std::string lastName){
	this->lastName = lastName;
	return 1;
}

int				Contact::SetNickName(std::string nickName){
	this->nickName = nickName;
	return 1;
}

int				Contact::SetLogin(std::string login){
	this->login = login;
	return 1;
}

int				Contact::SetPostalAdress(std::string postalAdress){
	this->postalAdress = postalAdress;
	return 1;
}

int				Contact::SetEmail(std::string email){
	this->email = email;
	return 1;
}

int				Contact::SetPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
	return 1;
}

int				Contact::SetBirthday(std::string birthday){
	this->birthday = birthday;
	return 1;
}

int				Contact::SetFavoriteMeal(std::string favoriteMeal){
	this->favoriteMeal = favoriteMeal;
	return 1;
}

int				Contact::SetUnderwearColor(std::string underwearColor){
	this->underwearColor = underwearColor;
	return 1;
}

int				Contact::SetDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
	return 1;
}

std::string		Contact::GetFirstName(void) const{
	return this->firstName;
}

std::string		Contact::GetLastName(void) const{
	return this->lastName;
}

std::string		Contact::GetNickName(void) const{
	return this->nickName;
}

std::string		Contact::GetLogin(void) const{
	return this->login;
}

std::string		Contact::GetPostalAdress(void) const{
	return this->postalAdress;
}

std::string		Contact::GetEmail(void) const{
	return this->email;
}

std::string		Contact::GetPhoneNumber(void) const{
	return this->phoneNumber;
}

std::string		Contact::GetBirthday(void) const{
	return this->birthday;
}

std::string		Contact::GetFavoriteMeal(void) const{
	return this->favoriteMeal;
}

std::string		Contact::GetUnderwearColor(void) const{
	return this->underwearColor;
}

std::string		Contact::GetDarkestSecret(void) const{
	return this->darkestSecret;
}


