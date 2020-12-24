/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 21:08:13 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 21:08:14 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon {
private:
	std::string const &name;
	int apcost;
	int damage;
	AWeapon();
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & aWeapon);
	AWeapon & operator=(AWeapon const & rhs);
	~AWeapon();
	std::string & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
