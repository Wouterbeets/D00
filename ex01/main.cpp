/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 16:25:02 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 00:44:29 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

int		main(){
	std::string 	buff;
	PhoneBook  		pB;
	std::cout << "Welcome to your \\o/ AWESOME \\o/ PhoneBook " << std::endl;
	while (!std::cin.eof()){
	std::cout << "Please type ADD, SEARCH, or Exit " << std::endl;
		std::cin >> buff;
		if (buff.compare("EXIT") == 0){
			return 0;
		}
		if (buff.compare("ADD") == 0){
			pB.AddContact();
		}
		else if (buff.compare("SEARCH") == 0){
			pB.Search();
		}
	}	
}
