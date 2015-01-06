/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:47:19 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 07:47:42 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"
# include "Contact.class.hpp"

PhoneBook::PhoneBook(void){
	this->contactCounter = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

std::string	PhoneBook::userInput(std::string msg){
	std::string input;

	std::cout << msg << ":";
	std::getline(std::cin, input);
	return input;
}

int		PhoneBook::AddContact(void){
	if (this->contactCounter < 8){
		std::cout << "adding contact" << std::endl;
		this->contacts[this->contactCounter].SetFirstName(this->userInput("Please enter your first name"));
		this->contacts[this->contactCounter].SetLastName(this->userInput("Please enter your last name"));
		this->contacts[this->contactCounter].SetNickName(this->userInput("Please enter your nick name"));
		this->contacts[this->contactCounter].SetLogin(this->userInput("Please enter your login"));
		this->contacts[this->contactCounter].SetPostalAdress(this->userInput("Please enter your postal adress"));
		this->contacts[this->contactCounter].SetEmail(this->userInput("Please enter your email"));
		this->contacts[this->contactCounter].SetPhoneNumber(this->userInput("Please enter your phone number"));
		this->contacts[this->contactCounter].SetBirthday(this->userInput("Please enter your birthday date"));
		this->contacts[this->contactCounter].SetFavoriteMeal(this->userInput("Please enter your favoriteMeal"));
		this->contacts[this->contactCounter].SetUnderwearColor(this->userInput("Please enter your underwear color"));
		this->contacts[this->contactCounter].SetDarkestSecret(this->userInput("Please enter your darkest secret"));
		this->contactCounter++;
	}
	else {
		std::cout << "Your PhoneBook is full! Try SEARCH or EXIT " <<std::endl;
		return -1;
	}
	return 1;
}

void	PhoneBook::displaySearch(int i){
	std::cout << "         " << i << "|";
	std::string str;
	str = this->contacts[i].GetFirstName();
	if (str.size() > 10){
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "|";
	}
	else {
		std::cout << std::setw(10) << str  << "|";
	}
	str = this->contacts[i].GetLastName();
	if (str.size() > 10){
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "|";
	}
	else {
		std::cout << std::setw(10) << str  << "|";
	}
	str = this->contacts[i].GetNickName();
	if (str.size() > 10){
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "|";
	}
	else {
		std::cout << std::setw(10) << str  << "|";
	}
	std::cout << std::endl;
}

int		PhoneBook::Search(){
		int		i;
		std::string buff;
		i = 0;
		std::cout << "     index|first name| last name|  nickname|" << std::endl;
		while(i < this->contactCounter){
			this->displaySearch(i);
			i++;
		}
		buff = this->userInput("please type the index of the contact you want to display");
		if(buff.compare("0") == 0){
			this->dispContact(0);
		}
		else if(buff.compare("1") == 0){
			this->dispContact(1);
		}
		else if(buff.compare("2") == 0){
			this->dispContact(2);
		}
		else if(buff.compare("3") == 0){
			this->dispContact(3);
		}
		else if(buff.compare("4") == 0){
			this->dispContact(4);
		}
		else if(buff.compare("5") == 0){
			this->dispContact(5);
		}
		else if(buff.compare("6") == 0){
			this->dispContact(6);
		}
		else if(buff.compare("7") == 0){
			this->dispContact(7);
		}
		else if(buff.compare("8") == 0){
			this->dispContact(8);
		}
		else {
			std::cout << "input not valid, Please try agian, type SEARCH and then a valid number" << std::endl;
		}
		return 1;
}

void		PhoneBook::dispContact(int i){
	std::string 	str;
	
	if(i < this->contactCounter){
		str = this->contacts[i].GetFirstName();
		std::cout << std::setw(25) << "first name:" << str << std::endl;
		str = this->contacts[i].GetLastName();
		std::cout << std::setw(25) << "last name:" << str << std::endl;
		str = this->contacts[i].GetNickName();
		std::cout << std::setw(25) << "nickname:" << str << std::endl;
		str = this->contacts[i].GetLogin();
		std::cout << std::setw(25) << "login:" << str << std::endl;
		str = this->contacts[i].GetPostalAdress();
		std::cout << std::setw(25) << "Postal Adress:" << str << std::endl;
		str = this->contacts[i].GetEmail();
		std::cout << std::setw(25) << "Email:" << str << std::endl;
		str = this->contacts[i].GetPhoneNumber();
		std::cout << std::setw(25) << "Phone Number:" << str << std::endl;
		str = this->contacts[i].GetFavoriteMeal();
		std::cout << std::setw(25) << "Favorite Meal:" << str << std::endl;
		str = this->contacts[i].GetUnderwearColor();
		std::cout << std::setw(25) << "Underwear Color:" << str << std::endl;
		str = this->contacts[i].GetDarkestSecret();
		std::cout << std::setw(25) << "Darkest Secret:" << str << std::endl;
	}
	else {
		std::cout << "Number not in use" << std::endl;
	}
}

