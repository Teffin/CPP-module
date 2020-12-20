/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:05:03 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/29 19:05:04 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	FragTrap *FR4GTP;
	FR4GTP = new FragTrap("FR4G-TP");
	FR4GTP->rangedAttack("Kerker");
	FR4GTP->meleeAttack("Kerker");

	FR4GTP->takeDamage(100);
	FR4GTP->beRepaired(94);
	FR4GTP->vaulthunter_dot_exe("KEker");
	FR4GTP->vaulthunter_dot_exe("KEker");

	FR4GTP->vaulthunter_dot_exe("KEker");

	FR4GTP->vaulthunter_dot_exe("KEker");

	FR4GTP->vaulthunter_dot_exe("KEker");


	delete FR4GTP;

	ScavTrap *SC4VTP;
	SC4VTP = new ScavTrap("SC4V-TP");
	SC4VTP->rangedAttack("Kerker");
	SC4VTP->meleeAttack("Kerker");

	SC4VTP->takeDamage(100);
	SC4VTP->beRepaired(94);
	SC4VTP->challengeNewcomer();
	SC4VTP->challengeNewcomer();
	SC4VTP->beRestoreMana(50);

	SC4VTP->challengeNewcomer();
	SC4VTP->challengeNewcomer();
	SC4VTP->beRestoreMana(50);
	SC4VTP->challengeNewcomer();

	SC4VTP->challengeNewcomer();
	delete SC4VTP;

	return 0;
}