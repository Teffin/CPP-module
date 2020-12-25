/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 21:08:05 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 21:08:07 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
		name(name), apcost(apcost), damage(damage) {


}

AWeapon::AWeapon(const AWeapon &aWeapon) {
	*this = aWeapon;
}

AWeapon::~AWeapon() {

}


AWeapon & AWeapon::operator=(const AWeapon &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	return *this;
}

std::string const AWeapon::getName() const {
	return this->name;
}

int AWeapon::getAPCost() const {
	return this->apcost;

}

int AWeapon::getDamage() const {
	return this->damage;
}