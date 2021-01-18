/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:16:32 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/27 15:16:34 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# define MAX_AP 40
# define REGEN_AP 10
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
private:
	std::string name;
	int actionPoints;
	AWeapon *weapon;
	Character();
	bool haveAp();
public:
	Character(std::string const & name);
	Character(Character const & character);
	~Character();
	Character & operator=(Character const &rhs);
	void recoverAP();
	void equip(AWeapon *newWeapon);
	void attack(Enemy *enemy);
	std::string const getName() const;
	int const getActionPoints() const;
	std::string const getWeaponName() const;
	bool weaponIsArmed() const;

};

std::ostream & operator<<(std::ostream & os, Character const & character);

#endif
