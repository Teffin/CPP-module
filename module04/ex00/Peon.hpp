/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 20:18:06 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 20:18:07 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"
# include <iostream>

class Peon: public Victim {
private:
	Peon();
public:
	Peon(std::string newName);
	Peon(Peon const & peon);
	Peon & operator=(Peon const & rhs);
	~Peon();
	void getPolymorphed() const;
};

#endif
