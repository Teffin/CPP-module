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

class Sorcerer {
private:
	std::string name;
	std::string title;
	Sorcerer();


public:
	Sorcerer(std::string newName, std::string newTitle);
	Sorcerer(Sorcerer const & sorcerer);
	Sorcerer & operator=(Sorcerer const &rhs);
	~Sorcerer();
	void Introduce() const;
	std::string GetName() const;
	std::string GetTitle() const;
};

std::ostream & operator<<(std::ostream out, const Sorcerer & sorcerer);

#endif
