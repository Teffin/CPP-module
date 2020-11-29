/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:06:12 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 13:06:13 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define PRINT(var_) {std::cout << MAGENTA << #var_ << RESET << ": " << GREEN << (var_) << RESET << std::endl;}
# define RESET   "\033[0m"
# define MAGENTA "\033[35m"      /* Magenta */
# define GREEN   "\033[32m"      /* Green */

void		refactorString(std::string &ourString) {
	ourString = "HI THIS IS NEW BRAIN";
}

int main( void ) {
	std::string		mainString = "HI THIS IS BRAIN";
	std::string		*pointer = &mainString;
	std::string		*pointer_second = &mainString;

	std::string		&link = mainString;

	PRINT(mainString);
	PRINT(pointer);
	PRINT(pointer_second);
	PRINT(*pointer);
	PRINT(link);

	refactorString(mainString);

	PRINT(mainString);
	PRINT(pointer);
	PRINT(pointer_second);
	PRINT(*pointer);
	PRINT(link);
}

