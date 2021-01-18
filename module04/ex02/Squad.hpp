/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 05:21:46 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/02 05:21:47 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class Squad: public ISquad {
private:
	ISpaceMarine **iSpaceMarine;
	int index;
protected:

public:
	Squad();
	~Squad();
	Squad(Squad const& squad);
	Squad &operator=(Squad const& rhs);
	int getCount() const;
	ISpaceMarine* getUnit(int num) const;
	int push(ISpaceMarine*);
};
#endif
