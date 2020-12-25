/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 19:50:39 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 19:50:42 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	return;
}

NinjaTrap::NinjaTrap(std::string newName):
		ClapTrap(newName, 60, 60,
				 120, 120,
				 1, 60, 5,
				 0) {
	std::cout << "\033[34m" << "NinjaTrap was born with level " << level << "\033[0m" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ninjaTrap) {
	*this = ninjaTrap;
	std::cout << "NinjaTrap was cloned! My level is " << level << std::endl;
	return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->maxHitPoints = rhs.maxHitPoints;
		this->energyPoints = rhs.energyPoints;
		this->maxEnergyPoints = rhs.maxEnergyPoints;
		this->level = rhs.level;
		this->meleeAttackDamage = rhs.meleeAttackDamage;
		this->rangeAttackDamage = rhs.rangeAttackDamage;
		this->armorDamageReduction = rhs.armorDamageReduction;
	}
	std::cout << "NinjaTrap was assignation! My level is " << level << std::endl;
	return *this;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "\033[34m" << "NinjaTrap hara-kiri..." << "\033[0m" << std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & rhs) {
	std::cout << "\033[36m" << "Hi NinjaTrap..." <<  "\033[0m" << std::endl;
	rhs.anounce();

}
void NinjaTrap::ninjaShoebox(ScavTrap const & rhs) {
	std::cout << "\033[37m" << "Hi ScavTrap..." <<  "\033[0m" << std::endl;
	rhs.anounce();

}
void NinjaTrap::ninjaShoebox(FragTrap const & rhs) {
	std::cout << "\033[38m" << "Hi FragTrap..." <<  "\033[0m" << std::endl;
	rhs.anounce();
}
