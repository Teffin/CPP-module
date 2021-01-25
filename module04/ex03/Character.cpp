/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:22:34 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/19 16:22:38 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string newName): _name(newName) {
	for (int i = 0; i <= MATERIA_COUNT; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(Character const &character) {
	*this = character;
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) {
		this->_materia = rhs._materia;
		this->_name = rhs.getName();
	}
	return *this;
}