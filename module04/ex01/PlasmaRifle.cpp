/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:24:12 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 16:24:13 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & plasmaRifle):AWeapon(plasmaRifle) {
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

PlasmaRifle::~PlasmaRifle() {

}


void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}