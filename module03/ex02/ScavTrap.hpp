/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:03:48 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/10 10:03:49 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define CHALLENGE_CAST_COUNT 25
# define DEFAULT_NAME "Default"
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ScavTrap {
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
	void presentChallenge( void );
	void giveQuestChallenge( void );
	void repairChallenge( void );
	void lolChallenge( void );
	void bufChallenge( void );
public:
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(ScavTrap const & scavTrap);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void beRestoreMana(unsigned int amount);
	void challengeNewcomer( void );
};

typedef void(ScavTrap::* challenges) ();


#endif
