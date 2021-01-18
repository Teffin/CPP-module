/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:26:31 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/17 14:26:32 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	print("* teleports from space *");
}

AssaultTerminator::~AssaultTerminator() {
	print("I’ll be back...");
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& assaultTerminator) {
	*this = assaultTerminator;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &rhs) {
	if (this != &rhs) {
	}
	return *this;
}

void AssaultTerminator::battleCry() const{
	print("This code is unclean. PURIFY IT!");
}

void AssaultTerminator::rangedAttack() const{
	print("* does nothing *");
}

void AssaultTerminator::meleeAttack() const{
	print("* attacks with chainfists *");
}

ISpaceMarine *AssaultTerminator::clone() const{
	return new AssaultTerminator(*this);
}

void AssaultTerminator::print(std::string text, bool withEndl) const{
	std::cout << text;
	if (withEndl)
	{
		std::cout << std::endl;
	}
}