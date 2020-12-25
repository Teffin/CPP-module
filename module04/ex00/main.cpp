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
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main() {
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	Sorcerer *rob(&robert);
	Victim *ji(&jim);
	Peon *jo(&joe);
	std::cout << *rob << *ji << *jo;
	rob->polymorph(*ji);
	rob->polymorph(*jo);
	//TODO переделать блять все классы в модуле 03 04
	return 0;
}