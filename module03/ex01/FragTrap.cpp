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
FragTrap::FragTrap() {
	return;
}

FragTrap::FragTrap(std::string newName): name(newName),
	hitPoints(100),maxHitPoints(100),energyPoints(100),maxEnergyPoints(100),
	level(1),meleeAttackDamage(30),rangeAttackDamage(20),armorDamageReduction(5) {
	std::cout << "Look at me! I'm dancing! I'm dancing! My level is " << level << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & fragTrap) {
	*this = fragTrap;
	std::cout << "Look at me! I'm cloned ! I'm CLONED!!! My level is " << level << std::endl;
	return;
}
FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Thats Fine now Assignation me!!! My level is " << level << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangeAttackDamage = rhs.rangeAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Wubwubwub..." << std::endl;
	return;
}
void FragTrap::printEnergyRemained( void ) {

	std::cout  << "!  Now your energy is "<< energyPoints << std::endl;
}

void FragTrap::printHpRemained( void ) {

	std::cout  << "! " << hitPoints << "HP remained" <<std::endl;
}

void FragTrap::printAttack(std::string const &target) {

	std::cout << name <<" <" << name << "> attacks <" << target;
}

void FragTrap::rangedAttack(std::string const &target) {
	printAttack(target);
	std::cout << "> at range, causing <" << rangeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	printAttack(target);
	std::cout<< "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::beRepaired(unsigned int amount) {
	int repairedHeals = 0;

	for ( ; hitPoints < maxHitPoints and amount > 0; --amount) {
		hitPoints += 1;
		repairedHeals += 1;
	}
	std::cout << name <<" repair on " << repairedHeals;
	printHpRemained();
}

void FragTrap::beRestoreMana(unsigned int amount) {
	int restoredMana = 0;
	for ( ; energyPoints < maxEnergyPoints and amount > 1; --amount) {
		energyPoints += 1;
		restoredMana += 1;
	}
	std::cout << name <<" restored energy on " << restoredMana;
	printEnergyRemained();
}

void FragTrap::deathMachine(std::string const & target) {
	printAttack(target);
	meleeAttackDamage += ((meleeAttackDamage  * 6) / 100);
	rangeAttackDamage += ((rangeAttackDamage * 6) / 100);
	std::cout<< "> at death machine, your UUUUUUUP!!!!! <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::surprisedStabilize(std::string const & target) {
	printAttack(target);
	++armorDamageReduction;
	std::cout<< "> at Surprised? Stabilize! your armor was update!!! <" << meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::tripleclocked(std::string const & target) {
	printAttack(target);
	std::cout<< "> at tripleclocked your attack x3!!!!!! <" << meleeAttackDamage * 3 << "> points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	skills cmd[] = {
			&FragTrap::rangedAttack,
			&FragTrap::meleeAttack,
			&FragTrap::deathMachine,
			&FragTrap::surprisedStabilize,
			&FragTrap::tripleclocked
	};

	if (energyPoints >= SKILL_CAST_COUNT)
	{
		if (energyPoints == 100)
			srand (time(NULL));
		int randomAttack = rand()%5;
		(this->*cmd[randomAttack])(target);
		std::cout << "You cast skill by " << SKILL_CAST_COUNT << " energy";
		printEnergyRemained();
		energyPoints -= SKILL_CAST_COUNT;
	}
	else
	{
		std::cout << "Not enough energy" << std::endl;
	}
}