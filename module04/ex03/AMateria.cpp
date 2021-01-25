/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:32:24 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/18 20:32:25 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}
AMateria::AMateria(const std::string &newType): _type(newType), _xp(0) {

}


AMateria::~AMateria() {

}

AMateria::AMateria(AMateria const & aMateria) {
	*this = aMateria;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	if (this != &rhs) {
		this->_xp = rhs.getXP();
	}
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return _xp;
}
