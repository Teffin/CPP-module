/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:50:25 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 18:50:29 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type): hitPoints(hp), type(type) {
	if (hitPoints < 0)
		hitPoints = 0;
}

Enemy::Enemy(const Enemy &enemy) {
	*this = enemy;
}

Enemy::~Enemy() {
}

Enemy & Enemy::operator=(Enemy const & rhs) {
	if (this != &rhs) {
		this->hitPoints = rhs.getHP();
		this->type = rhs.getType();
	}
	return *this;
}

const std::string Enemy::getType() const {
	return type;
}

int Enemy::getHP() const {
	return this->hitPoints;
}

void Enemy::setHpWithDmg(int damage) {
	if (damage >= this->hitPoints) {
		this->hitPoints = 0;
	} else {
		this->hitPoints -= damage;
	}
}

void Enemy::takeDamage(int damage) {
	if (damage >= 0) {
		Enemy::setHpWithDmg(damage);
	}
}

void Enemy::printer(std::string text, bool withNewLine) {
	std::cout << text;
	if (withNewLine) {
		std::cout << std::endl;
	}
}