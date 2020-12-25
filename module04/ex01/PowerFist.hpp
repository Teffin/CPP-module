/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:41:13 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/25 18:41:14 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
private:

public:
	PowerFist();
	PowerFist(PowerFist const &powerFist);
	PowerFist & operator=(PowerFist const &rhs);
	~PowerFist();
	void attack() const;
};

#endif
