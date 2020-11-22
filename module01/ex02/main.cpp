/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:52:04 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:52:05 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
# include "Zombie.hpp"

std::string randomZombieName() {

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

void	ConstructDestructorZombie(std::string name = randomZombieName(), std::string type = randomZombieName()) {
	Zombie zombie(name, type);
}

int main( void ) {
	ZombieEvent *zombieEvent;
	zombieEvent = new ZombieEvent();

	Zombie zombie("name", "type");

	delete zombieEvent->newZombie(randomZombieName());

	Zombie *zomb = zombieEvent->newZombie(randomZombieName());
	delete zomb;

	ConstructDestructorZombie();

	zombieEvent->setZombieType("Tank");

	ConstructDestructorZombie();

	delete zombieEvent->newZombie(randomZombieName());

}
