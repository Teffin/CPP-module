/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 16:24:17 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 16:24:19 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
private:

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &plasmaRifle);
	PlasmaRifle & operator=(PlasmaRifle const &rhs);
	~PlasmaRifle();
	void attack() const;
};

#endif