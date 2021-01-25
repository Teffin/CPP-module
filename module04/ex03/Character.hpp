/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:22:42 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/19 16:22:44 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>
# define MATERIA_COUNT 3

class Character: public ICharacter {
private:
	Character();
	std::string _name;
	AMateria _materia[MATERIA_COUNT];

public:
	Character(std::string newName);
	Character(Character const & character);
	~Character();
	Character &operator=(Character const & rhs);

};

#endif