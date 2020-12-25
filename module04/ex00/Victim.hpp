/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 18:36:27 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/24 18:36:29 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
protected:
	std::string name;
	Victim();
	void PrinterLine(std::string line, bool withEndl) const;
	void PrinterName(std::string name) const;
		public:
	Victim(std::string newName);
	Victim(Victim const & victim);
	Victim & operator=(Victim const &rhs);
	~Victim();
	std::string GetName() const;
	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &out, const Victim &victim);


#endif
