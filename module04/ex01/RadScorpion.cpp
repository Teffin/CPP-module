/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 12:40:29 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/27 12:40:31 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80,  "RadScorpion") {
	Enemy::printer("* click click click *");
}

RadScorpion::RadScorpion(RadScorpion const & radScorpion): Enemy(radScorpion) {
}

RadScorpion RadScorpion::operator=(RadScorpion const & rhs) {
	if (this != &rhs)
		Enemy::operator=(rhs);
	return *this;
}
RadScorpion::~RadScorpion() {
	Enemy::printer( "* SPROTCH *");
}

