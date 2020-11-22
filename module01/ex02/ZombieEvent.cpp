/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:51:50 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:51:51 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	setZombieType(DEFAULT_TYPE);
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}
Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie* zombie;
	zombie = new Zombie(name, type);
	return zombie;
}

void ZombieEvent::setZombieType(std::string newType) {
	type = newType;
}

