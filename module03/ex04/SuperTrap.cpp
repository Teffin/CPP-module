/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 20:36:29 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 20:36:31 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string newName): FragTrap(), NinjaTrap() {
	name = newName;
	level = 1;
	std::cout << "\033[30m" << "SuperTrap go kill All! " << "\033[0m" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & superTrap) {
	*this = superTrap;
	std::cout << "SuperTrap was cloned! " << std::endl;
	return;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs) {
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
	std::cout << "SuperTrap was assignation!" << std::endl;
	return *this;
}

SuperTrap::~SuperTrap() {
	std::cout << "\033[30m" << "SuperTrap will be back..." << "\033[0m" << std::endl;
	return;
}