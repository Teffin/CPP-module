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

}

AWeapon::~AWeapon() {


}

AWeapon & AWeapon::operator=(const AWeapon &rhs) {
//	this->na

}