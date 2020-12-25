/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 21:45:50 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/21 21:45:51 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string name;
	std::string title;
	Sorcerer();
	void PrinterLine(std::string line, bool withEndl) const;
	void PrinterName(std::string name, std::string title) const;
public:
	Sorcerer(std::string newName, std::string newTitle) ;
	Sorcerer(Sorcerer const & sorcerer) ;
	Sorcerer & operator=(Sorcerer const &rhs);
	~Sorcerer();
	std::string GetName() const;
	std::string GetTitle() const;
	void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
