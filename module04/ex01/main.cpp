/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 21:08:18 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 21:08:19 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include <iostream>

int main() {
	AWeapon* pr = new PlasmaRifle();
	pr->attack();
	std::cout << pr->getName() << std::endl;
	std::cout << pr->getAPCost() << std::endl;
	std::cout << pr->getDamage() << std::endl;
	return 0;
}

