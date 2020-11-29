/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 09:51:19 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 09:51:21 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string newName): name(newName) {
	std::cout << "I'm construct " << name << std::endl;
	return;
}

Pony::~Pony( void ) {
	std::cout << "Destruuuuuct " << name << std::endl;
	return;
}

void Pony::make_it_do_some_stuff( void ) {
	std::cout << "make_it_do_some_stuff " << name << std::endl;
}