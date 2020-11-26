/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:54:39 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 18:54:41 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	return;
}

Human::~Human() {
	return;
}

Brain Human::getBrain() {
	return brain;
}

std::string Human::identify() {
	return brain.identify();
}