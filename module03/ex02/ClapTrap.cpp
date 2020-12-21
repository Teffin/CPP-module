/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 13:08:49 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 13:08:51 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
}


ClapTrap::ClapTrap(std::string newName , int hitPoints, int maxHitPoints,
				   int energyPoints, int maxEnergyPoints,
				   int level, int meleeAttackDamage,
				   int rangeAttackDamage, int armorDamageReduction): name(newName),
hitPoints(hitPoints),maxHitPoints(maxHitPoints),energyPoints(energyPoints),maxEnergyPoints(maxEnergyPoints),
level(level),meleeAttackDamage(meleeAttackDamage),rangeAttackDamage(rangeAttackDamage),armorDamageReduction(armorDamageReduction) {
	std::cout << "\033[31m" << "Base was Created..." << "\033[0m" << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const & clapTrap) {
	if (this != &clapTrap)
	{
		*this = clapTrap;
	}
	std::cout << "Base was cloned! " << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangeAttackDamage = rhs.rangeAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	std::cout << "Base was assignation!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[31m" << "Base was destroyed..." << "\033[0m" << std::endl;
	return;
}

void ClapTrap::printAttack(std::string const &target) {

	std::cout << name << " <" << name << "> attacks <" << target;
}

void ClapTrap::printHpRemained( void ) {

	std::cout  << "! " << hitPoints << "HP remained" << std::endl;
}

void ClapTrap::printEnergyRemained( void ) {

	std::cout  << "!  Now your energy is " << energyPoints << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target) {
	printAttack(target);
	std::cout << "> at range, causing <" << rangeAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
	printAttack(target);
	std::cout << "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	for (int i = 0; i < armorDamageReduction; ++i) {
		if (amount > 0)
			--amount;
	}
	int takedDamage = 0;
	for ( ; hitPoints > 0 and amount > 0; --amount) {
		hitPoints -= 1;
		takedDamage += 1;
	}
	std::cout << name << " take damage on " << takedDamage;
	printHpRemained();

}

void ClapTrap::beRepaired(unsigned int amount) {
	int repairedHeals = 0;

	for ( ; hitPoints < maxHitPoints and amount > 0; --amount) {
		hitPoints += 1;
		repairedHeals += 1;
	}
	std::cout << name << " repair on " << repairedHeals;
	printHpRemained();
}

void ClapTrap::beRestoreMana(unsigned int amount) {
	int restoredMana = 0;
	for ( ; energyPoints < maxEnergyPoints and amount > 0; --amount) {
		energyPoints += 1;
		restoredMana += 1;
	}
	std::cout << name << " restored energy on " << restoredMana;
	printEnergyRemained();
}