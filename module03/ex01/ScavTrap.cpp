/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:01:48 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/10 10:01:51 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	return;
}

ScavTrap::ScavTrap(std::string newName): name(newName),
	hitPoints(100),maxHitPoints(100),energyPoints(50),maxEnergyPoints(50),
	level(1),meleeAttackDamage(20),rangeAttackDamage(15),armorDamageReduction(3) {
	std::cout << "The door of evil lair, is protected! My level is " << level << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & scavTrap) {
	*this = scavTrap;
	std::cout << "Protect was cloned! My level is " << level << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
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
	std::cout << "Protect was assignation! My level is " << level << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Protect was ruined..." << std::endl;
	return;
}

void ScavTrap::printEnergyRemained( void ) {

	std::cout  << "!  Now your energy is "<< energyPoints << std::endl;
}

void ScavTrap::printHpRemained( void ) {

	std::cout  << "! " << hitPoints << "HP remained" <<std::endl;
}

void ScavTrap::printAttack(std::string const &target) {

	std::cout << name <<" <" << name << "> attacks <" << target;
}

void ScavTrap::rangedAttack(std::string const &target) {
	printAttack(target);
	std::cout << "> at range, causing <" << rangeAttackDamage << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	printAttack(target);
	std::cout<< "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	for (int i = 0; i < armorDamageReduction; ++i) {
		if (amount > 0)
			--amount;
	}
	int takedDamage = 0;
	for ( ; hitPoints > 0 and amount > 0; --amount) {
		hitPoints -= 1;
		takedDamage += 1;
	}
	std::cout << name <<" take damage on " << takedDamage;
	printHpRemained();

}

void ScavTrap::beRepaired(unsigned int amount) {
	int repairedHeals = 0;

	for ( ; hitPoints < maxHitPoints and amount > 0; --amount) {
		hitPoints += 1;
		repairedHeals += 1;
	}
	std::cout << name <<" repair on " << repairedHeals;
	printHpRemained();
}

void ScavTrap::beRestoreMana(unsigned int amount) {
	int restoredMana = 0;
	for ( ; energyPoints < maxEnergyPoints and amount > 0; --amount) {
		energyPoints += 1;
		restoredMana += 1;
	}
	std::cout << name <<" restored energy on " << restoredMana;
	printEnergyRemained();
}

void ScavTrap::bufChallenge( void ) {
	++armorDamageReduction;
	std::cout<< "BUFF BUF BUF BUF BUF BUF! Def is up to <" << armorDamageReduction << "> !" << std::endl;
}

void ScavTrap::lolChallenge( void ) {
	std::cout<< "Ups...jammed the door while I tampering with it" << std::endl;
}

void ScavTrap::repairChallenge( void ) {
	std::cout<< "just repair this door...mb I to do it" << std::endl;
}

void ScavTrap::giveQuestChallenge( void ) {
	std::cout<< "Hunters! Go killing Dark Siders and bringing back proof!" << std::endl;
}

void ScavTrap::presentChallenge( void ) {
	std::cout<< "I'm loyal to RedBelly, and acts as a gatekeeper in Triton "
			 "Flats at the main entrance to RedBelly's stronghold in Crisis Scar." << std::endl;
}

void 	ScavTrap::challengeNewcomer( void ) {
	challenges cmd[] = {
			&ScavTrap::lolChallenge,
			&ScavTrap::bufChallenge,
			&ScavTrap::repairChallenge,
			&ScavTrap::giveQuestChallenge,
			&ScavTrap::presentChallenge
	};

	if (energyPoints >= CHALLENGE_CAST_COUNT)
	{
		if (energyPoints == 100)
			srand (time(NULL));
		int randomchallenge = rand()%5;
		(this->*cmd[randomchallenge])();
		std::cout << "You cast skill by " << CHALLENGE_CAST_COUNT << " energy";
		printEnergyRemained();
		energyPoints -= CHALLENGE_CAST_COUNT;
	}
	else
	{
		std::cout << "Not enough energy" << std::endl;
	}
}
