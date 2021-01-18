/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:16:26 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/27 15:16:28 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): name(name) {
	this->actionPoints = MAX_AP;
	this->weapon = nullptr;
}

Character::Character(const Character &character) {
	*this = character;
}

Character & Character::operator=(const Character &rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		this->actionPoints = rhs.actionPoints;
	}
	return *this;
}

Character::~Character() {

}

void Character::recoverAP() {
	actionPoints += REGEN_AP;
	if (actionPoints > MAX_AP) {
		actionPoints = MAX_AP;
	}
}


std::string const Character::getName() const {
	return this->name;
}

int const Character::getActionPoints() const {
	return this->actionPoints;
}

std::string const Character::getWeaponName() const{
	if (weaponIsArmed()) {
		return weapon->getName();
	}
	return "";
}

bool Character::weaponIsArmed() const{
	return this->weapon != nullptr;
}

bool Character::haveAp() {
	return weaponIsArmed() and this->actionPoints >= weapon->getAPCost();
}

void Character::attack(Enemy *enemy) {
	if (weaponIsArmed() and haveAp()) {
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0) {
			delete enemy;
		}
		this->actionPoints -= weapon->getAPCost();
	}
}

void Character::equip(AWeapon *newWeapon) {
	this->weapon = newWeapon;
}

std::ostream & operator<<(std::ostream & os, Character const & character) {
	os << character.getName() << " has " << character.getActionPoints() << " and ";
	if (character.weaponIsArmed()){
		os << "wields a " << character.getWeaponName();
	} else {
		os << "is unarmed";
	}
	os << std::endl;
	return os;
}