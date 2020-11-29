/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:58:32 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 15:58:34 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string newName, Weapon &newWeapon);
	~HumanA();
	void attack();
};

#endif