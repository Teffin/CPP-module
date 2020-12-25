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


class Enemy
{
private:
	[...]
public:
	Enemy(int hp, std::string const & type);
	[...] ~Enemy();
	std::string [...] getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};
