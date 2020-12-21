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

ScavTrap::ScavTrap(std::string newName):
	ClapTrap(newName, 100, 100,
		  50, 50,
		  1, 20, 15,
		  3) {
	std::cout << "\033[33m" << "The door of evil lair, is protected! My level is " << level << "\033[0m" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & scavTrap) {
	if (this != &scavTrap)
	{
		*this = scavTrap;
	}
	std::cout << "Protect was cloned! My level is " << level << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangeAttackDamage = rhs.rangeAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	std::cout << "Protect was assignation! My level is " << level << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[33m" << "Protect was ruined..." << "\033[0m" << std::endl;
	return;
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
