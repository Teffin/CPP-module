/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:04:52 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/29 19:04:54 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName): name(newName) {
	std::cout << "Look at me! I'm dancing! I'm dancing!" << std::endl;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangeAttackDamage = 20;
	armorDamageReduction = 5;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Wubwubwub!" << std::endl;
	return;
}
std::ostream printAttack(std::string const &target) {
	std::cout << "FR4G-TP <" << name << "> attacks <" << target;
}

void FragTrap::rangedAttack(std::string const &target) {
	printAttack(target) << "> at range, causing <" << rangeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	printAttack(target) << "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	int takedDamage = 0;
	for ( ; hitPoints > 0 and amount > 1; --amount) {
		hitPoints -= 1;
		takedDamage += 1;
	}
	std::cout << "FR4G-TP take damage on " << takedDamage << "! " << hitPoints << "HP remained" <<std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	int repairedHeals = 0;

	for ( ; hitPoints < maxHitPoints and amount > 1; --amount) {
		hitPoints += 1;
		repairedHeals += 1;
	}
	std::cout << "FR4G-TP repair on " << repairedHeals << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (energyPoints > SKILL_CAST_COUNT)
	{

	}
	else
	{
		std::cout << "Not enough mana" << std::endl;
	}
}