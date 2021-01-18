/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 16:55:48 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/26 16:55:50 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant") {
	Enemy::printer("Gaaah. Me want smash heads!");
}

SuperMutant::SuperMutant(SuperMutant const &superMutant): Enemy(superMutant) {

}

SuperMutant & SuperMutant::operator=(SuperMutant const &rhs) {
	if (this != &rhs)
		Enemy::operator=(rhs);
	return *this;
}
SuperMutant::~SuperMutant() {
	Enemy::printer("Aaargh...");
}

void SuperMutant::takeDamage(int damage) {
	if (damage - DAMAGE_REDUCTION >= 0) {
		Enemy::setHpWithDmg(damage - DAMAGE_REDUCTION);
	}
}