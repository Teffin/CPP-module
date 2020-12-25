/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:41:08 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 18:41:09 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(PowerFist const & powerFist):AWeapon(powerFist) {
}

PowerFist & PowerFist::operator=(PowerFist const &rhs) {
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return *this;
}

PowerFist::~PowerFist() {

}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}