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

void PrinterName(std::string name, std::string title = "") {
	std::cout << name;
	if (!title.empty())
	{
		std::cout << ", " << title << ",";
	}
	std::cout << " ";
}
void PrinterLine(std::string line, bool withEndl = true) {
	std::cout << line;
	if (withEndl)
		std::cout << std::endl;
}

Sorcerer::Sorcerer(std::string newName, std::string newTitle): name(newName), title(newTitle) {
	PrinterName(this->name, this->title);
	PrinterLine("is born!");
}

Sorcerer::~Sorcerer() {
	PrinterName(this->name, this->title);
	PrinterLine("is dead. Consequences will never be the same!");
}

void Sorcerer::Introduce() const{
	PrinterLine("I am ", false);
	PrinterName(this->name, this->title);
	PrinterLine("and I like ponies!");
}

std::string Sorcerer::GetName() const{
	return name;
}

std::string Sorcerer::GetTitle() const{
	return this->title;
}

std::ostream & operator<<(std::ostream &out, const Sorcerer & sorcerer) {
	out << "I am " << sorcerer.GetName() << ", " << sorcerer.GetTitle() << ", and I like ponies!" << std::endl;
	return out;
}
