/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:32:28 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/18 20:32:29 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	//[...]
	virtual ~AMateria();
	AMateria(AMateria const & aMateria);
	AMateria &operator=(AMateria const & rhs);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif