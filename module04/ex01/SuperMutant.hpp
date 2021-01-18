/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 16:55:56 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/26 16:55:58 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# define DAMAGE_REDUCTION 3
# include "Enemy.hpp"

class SuperMutant: public Enemy {
private:

public:
	SuperMutant();
	SuperMutant(SuperMutant const &superMutant);
	SuperMutant & operator=(SuperMutant const &rhs);
	~SuperMutant();
	void takeDamage(int damage);
};


#endif
