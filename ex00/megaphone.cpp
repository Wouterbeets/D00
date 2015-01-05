/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 14:29:08 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/05 15:10:06 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		strlen(char *word)
{
	int		i;

	i = 0;
	if (word)
	{
		while(word[i] != 0){
			i++;
		}	
		return i;
	}
	return -1;
}

char	*getCapWord(char *word)
{
	int		i;
	int		len;

	len = strlen(word);
	i = 0;
	while(i < len)
	{
		if(word[i] <= 'z' && word[i] >= 'a')
		{
			word[i] = word[i] - 32;
		}
		i++;
	}
	return word;
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	while(i < argc)
	{
		std::cout << getCapWord(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
