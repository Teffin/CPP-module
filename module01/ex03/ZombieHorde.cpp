/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:00:02 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 12:00:03 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int newCountOfZombies):countOfZombies(newCountOfZombies) {

	t_zombies *newZombie;
	typeZombie = std::to_string(newCountOfZombies);
	if (countOfZombies < 0) {
		countOfZombies = 0;
	}
	else {
		zombies = new t_zombies();
		newZombie = zombies;
		for (int i = 0; i < countOfZombies ; ++i) {
			newZombie->zombie = new Zombie(randomZombieName(), typeZombie);
			newZombie->next = new t_zombies();
			newZombie = newZombie->next;
		}
		delete newZombie;
	}
	return;
}

ZombieHorde::~ZombieHorde() {
	t_zombies *tempZombie;
	for (int i = 0; i < countOfZombies ; ++i) {
		tempZombie = zombies;
		zombies = zombies->next;
		delete tempZombie->zombie;
		delete tempZombie;
	}
	return;
}

void ZombieHorde::announce() {
	t_zombies *tempZombie;
	tempZombie = zombies;
	for (int i = 0; i < countOfZombies ; ++i) {
		tempZombie->zombie->announcement();
		tempZombie = tempZombie->next;
	}
}

std::string ZombieHorde::randomZombieName() {

	char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	char vowels[] = {'a','e','i','o','u','y'};
	std::string name = "";
	int random;
	int length = std::rand()%10;
	int count = 0;
	for(int i = 0; i < length; i++) {
		random = std::rand() % 2;
		if(random < 2 && count < 2) {
			name = name + consonents[std::rand() % 19];
			count++;
		}
		else {
			name = name + vowels[std::rand() % 5];
			count = 0;
		}
	}
	return name;
}