/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 21:14:50 by hharrold          #+#    #+#             */
/*   Updated: 2021/01/18 21:14:51 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {
private:

public:
	Ice();
	~Ice();
	Ice(Ice const & ice);
	Ice &operator=(Ice const & rhs);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
