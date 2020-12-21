/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 13:08:56 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 13:08:58 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
protected:
	std::string name;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	int meleeAttackDamage;
	int rangeAttackDamage;
	int armorDamageReduction;
	void printAttack(std::string const &target);
	void printHpRemained( void );
	void printEnergyRemained( void );
	ClapTrap();
public:
	ClapTrap( std::string newName, int hitPoints, int maxHitPoints,
			  int energyPoints, int maxEnergyPoints,
			  int level, int meleeAttackDamage,
			  int rangeAttackDamage, int armorDamageReduction);
	~ClapTrap( void );
	ClapTrap(ClapTrap const & clapTrap);
	ClapTrap & operator=(ClapTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRestoreMana(unsigned int amount);
	void anounce() const;
};

#endif