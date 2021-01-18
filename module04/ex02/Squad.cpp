/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 05:21:39 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/02 05:21:41 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): index(0) {
	iSpaceMarine = NULL;
}

Squad::~Squad() {
	for (int i = 0; i < this->index; i++) {
		delete iSpaceMarine[i];
	}
}
Squad::Squad(Squad const& squad) {
	*this = squad;

}

Squad &Squad::operator=(Squad const & rhs){
	if (this != &rhs) {
		this->iSpaceMarine = rhs.iSpaceMarine;
		this->index = rhs.index;
	}
	return *this;
}

int Squad::getCount() const {
	return this->index;
}

ISpaceMarine *Squad::getUnit(int num) const {
	if (num > this->index || num < 0 || iSpaceMarine == NULL)
	{
		return NULL;
	}
	return iSpaceMarine[num];
}

int Squad::push(ISpaceMarine *newISpaceMarine) {
	ISpaceMarine **tempISpaceMarine;
	if (newISpaceMarine != NULL){
		this->index += 1;
		tempISpaceMarine = new ISpaceMarine*[this->index];
		if (iSpaceMarine != NULL) {
			for (int i = 0; i < this->index - 1; i++) {
				tempISpaceMarine[i] = iSpaceMarine[i];
			}
			delete iSpaceMarine;
		}
		tempISpaceMarine[index - 1] = newISpaceMarine;
		iSpaceMarine = tempISpaceMarine;
	}
	return this->index;
}
