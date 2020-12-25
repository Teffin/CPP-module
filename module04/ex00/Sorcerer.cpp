/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 21:45:44 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/21 21:45:46 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

void Sorcerer::PrinterName(std::string name, std::string title = "") const {
	std::cout << name;
	if (!title.empty())
	{
		std::cout << ", " << title << ",";
	}
	std::cout << " ";
}
void Sorcerer::PrinterLine(std::string line, bool withEndl = true) const {
	std::cout << line;
	if (withEndl)
		std::cout << std::endl;
}

Sorcerer::Sorcerer(std::string newName, std::string newTitle): name(newName), title(newTitle) {
	PrinterName(this->name, this->title);
	PrinterLine("is born!");
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer) {
		*this = sorcerer;
}

Sorcerer::~Sorcerer() {
	PrinterName(this->name, this->title);
	PrinterLine("is dead. Consequences will never be the same!");
}

Sorcerer & Sorcerer::operator=(Sorcerer const &rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

std::string Sorcerer::GetName() const{
	return this->name;
}

std::string Sorcerer::GetTitle() const{
	return this->title;
}

void Sorcerer::polymorph(Victim const & victim) const{
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream &out, const Sorcerer & sorcerer) {
	out << "I am " << sorcerer.GetName() << ", " << sorcerer.GetTitle() << ", and I like ponies!" << std::endl;
	return out;
}
