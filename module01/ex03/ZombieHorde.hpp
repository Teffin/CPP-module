/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:00:07 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/22 12:00:08 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# define DEFAULT_TYPE "default"
# include <iostream>
# include "Zombie.hpp"

typedef struct	s_zombies {

	Zombie		*zombie;
	s_zombies	*next;
}				t_zombies;

class ZombieHorde
{
private:
	std::string typeZombie;
	int countOfZombies;
	t_zombies	*zombies;
	std::string randomZombieName();
public:
	void announce( void );
	ZombieHorde(int countOfZombies);
	~ZombieHorde( void );
};

#endif