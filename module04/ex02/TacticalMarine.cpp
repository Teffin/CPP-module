/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:27:38 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/17 14:27:40 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	print("Tactical Marine ready for battle!");
}

TacticalMarine::~TacticalMarine() {
	print("Aaargh...");
}

TacticalMarine::TacticalMarine(TacticalMarine const& tacticalMarine) {
	*this = tacticalMarine;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &rhs) {
	if (this != &rhs) {
	}
	return *this;
}

void TacticalMarine::print(std::string text, bool withEndl) const{
	std::cout << text;
	if (withEndl)
	{
		std::cout << std::endl;
	}
}

void TacticalMarine::battleCry() const{
	print("For the holy PLOT!");
}

void TacticalMarine::rangedAttack() const{
	print("* attacks with a bolter *");
}

void TacticalMarine::meleeAttack() const{
	print("* attacks with a chainsword *");
}

ISpaceMarine *TacticalMarine::clone() const{
 	return new TacticalMarine(*this);
}