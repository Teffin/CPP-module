/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 21:49:01 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/21 21:49:02 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

int main() {
	Sorcerer *sorcerer = new Sorcerer("Kek","Turec");
	std::cout << std::endl;
	std::cout << sorcerer;
	std::cout << std::endl;

	delete sorcerer;
	return 0;
}