/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:58:58 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 15:58:59 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
	std::string typeWeapon;
public:
	Weapon(std::string newTypeWeapon);
	~Weapon( void );
	const std::string &getType( void );
	void setType( std::string newTypeWeapon );
};

#endif