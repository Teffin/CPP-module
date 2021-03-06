/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:15:58 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 12:16:02 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main( void ) {

	ZombieHorde *z1 = new ZombieHorde(-1);
	delete z1;
	ZombieHorde *z2 = new ZombieHorde(0);
	delete z2;
	ZombieHorde *z3 = new ZombieHorde(1);
	delete z3;
	ZombieHorde *z4 = new ZombieHorde(10);
	z4->announce();
	delete z4;
}