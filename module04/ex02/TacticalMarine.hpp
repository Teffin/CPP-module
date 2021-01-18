/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:27:44 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/17 14:27:45 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
#include <iostream>
# include <string>

class TacticalMarine : public ISpaceMarine {
private:
	void print(std::string text, bool withEndl = true) const;

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const& tacticalMarine);
	virtual ~TacticalMarine();
	TacticalMarine & operator=(TacticalMarine const &rhs);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	
};

#endif
