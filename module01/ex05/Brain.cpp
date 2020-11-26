/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:54:27 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 18:54:28 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	void *pointer = this;
	std::ostringstream oss;
	oss << pointer;
	point = oss.str();
	return;
}

Brain::~Brain( void ) {
	return;
}

std::string		Brain::identify( void ) {
	return point;
}