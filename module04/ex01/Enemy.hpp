/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:50:34 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 18:50:36 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <iostream>

class Enemy
{
protected:
	void printer(std::string text, bool withNewLine = true);
	void setHpWithDmg(int damage);
private:
	int hitPoints;
	std::string type;
	Enemy();
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & enemy);
	Enemy & operator=(Enemy const & rhs);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif