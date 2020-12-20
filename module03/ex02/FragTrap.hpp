/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:04:57 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/29 19:04:58 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define SKILL_CAST_COUNT 25
# define DEFAULT_NAME "Default"
# include <iostream>
# include <stdlib.h>
# include <time.h>

class FragTrap {
private:
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
	void tripleclocked(std::string const & target);
	void surprisedStabilize(std::string const & target);
	void deathMachine(std::string const & target);

public:
	FragTrap();
	FragTrap(std::string newName);
	FragTrap(FragTrap const & fragTrap);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRestoreMana(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

typedef void(FragTrap::* skills) (std::string const & target);

#endif
