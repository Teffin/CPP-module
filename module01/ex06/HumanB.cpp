/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:58:39 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 15:58:42 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  newName): name(newName) {
	return;
}

HumanB::~HumanB() {
	return;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
