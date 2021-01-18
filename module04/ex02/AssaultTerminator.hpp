/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:26:35 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/17 14:26:36 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
#include <iostream>
# include <string>

class AssaultTerminator : public ISpaceMarine {
private:
	void print(std::string text, bool withEndl = true) const;
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const& assaultTerminator);
	AssaultTerminator& operator=(AssaultTerminator const &rhs);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif