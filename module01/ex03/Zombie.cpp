/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:50:57 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:50:59 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::printHeader() {
	std::cout << "<" << name << "(" << type << ")" << ">" << " ";
}

void	printSoundBorn() {
	std::cout << SOUND_BORN << std::endl;
}

void	printSoundDead() {
	std::cout << SOUND_DEAD << std::endl;
}

void	Zombie::announcement( void ) {
	printHeader();
	if(live)
	{
		printSoundBorn();
	}
	else
	{
		printSoundDead();
	}
}

Zombie::Zombie(std::string newName, std::string newType):type(newType), name(newName) {
	live = born;
	announcement();
	return;
}

Zombie::~Zombie() {
	live = dead;
	announcement();
	return;
}


