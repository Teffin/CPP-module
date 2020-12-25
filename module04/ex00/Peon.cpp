/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 20:18:02 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 20:18:03 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string newName): Victim(newName) {
	PrinterLine("Zog zog.", true);
}

Peon::Peon(Peon const & peon): Victim(peon.GetName()) {
	*this = peon;
}

Peon::~Peon() {
	PrinterLine("Bleuark...", true);
}

Peon & Peon::operator=(Peon const & rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
	}
	return *this;
}
void Peon::getPolymorphed() const {
	PrinterName(this->name);
	PrinterLine("has been turned into a pink pony!", true);
}
