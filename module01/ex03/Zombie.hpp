/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:51:03 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:51:04 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define SOUND_BORN "Braiiiiiiinnnssss..."
# define SOUND_DEAD "Raaugghh"

# include <iostream>

typedef enum e_live {
	dead = 0,
	born = 1
}			t_live;

class Zombie
{
private:
	std::string type;
	std::string name;
	t_live live;
	void	printHeader();
public:

	void announcement( void );

	Zombie(std::string newName, std::string newType);
	~Zombie( void );
	void setType( void );
};

#endif