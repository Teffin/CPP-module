/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 20:36:34 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 20:36:35 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# define CHALLENGE_CAST_COUNT 25
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(std::string newName);
	SuperTrap(SuperTrap const & superTrap);
	SuperTrap & operator=(SuperTrap const & rhs);
	~SuperTrap();
};


#endif