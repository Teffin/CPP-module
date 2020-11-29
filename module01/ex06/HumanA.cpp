/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:58:26 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 15:58:28 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon): name(newName), weapon(newWeapon) {
	return;
}

HumanA::~HumanA() {
	return;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}