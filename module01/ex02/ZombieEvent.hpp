/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:51:55 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:51:57 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# define DEFAULT_TYPE "default"
# include "Zombie.hpp"
class ZombieEvent {
private:
	std::string type;
	std::string randomChump( void );

public:
	ZombieEvent( void );
	~ZombieEvent( void );
	void setZombieType( std::string newType );
	Zombie* newZombie(std::string name);

};


#endif

