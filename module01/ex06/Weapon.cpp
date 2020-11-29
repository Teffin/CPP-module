/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:58:53 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 15:58:54 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newTypeWeapon):typeWeapon(newTypeWeapon) {
	return;
}

Weapon::~Weapon() {
	return;
}

const std::string &Weapon::getType( void ) {
	return typeWeapon;
}

void Weapon::setType(std::string newTypeWeapon) {
	typeWeapon = newTypeWeapon;
}