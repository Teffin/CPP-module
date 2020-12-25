/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 18:36:22 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 18:36:24 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

void Victim::PrinterName(std::string name) const{
	std::cout << name << " ";
}

void Victim::PrinterLine(std::string line, bool withEndl = true) const{
	std::cout << line;
	if (withEndl)
		std::cout << std::endl;
}

Victim::Victim(std::string newName): name(newName) {
	PrinterLine("Some random victim called ", false);
	PrinterName(this->name);
	PrinterLine("just appeared!");
}

Victim::Victim(Victim const & victim) {
	*this = victim;
}

Victim::~Victim() {
	PrinterLine("Victim ", false);
	PrinterName(this->name);
	PrinterLine("just died for no apparent reason!");
}

Victim & Victim::operator=(Victim const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
	}
	return *this;
}

std::string Victim::GetName() const{
	return this->name;
}

void Victim::getPolymorphed() const{
	PrinterName(this->name);
	PrinterLine("has been turned into a cute little sheep!");
}

std::ostream & operator<<(std::ostream &out, const Victim & victim) {
	out << "I'm " << victim.GetName() << ", " << "and I like otters!" << std::endl;
	return out;
}
