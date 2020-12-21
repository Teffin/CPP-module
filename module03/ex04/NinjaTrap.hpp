/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 19:50:45 by hharrold          #+#    #+#             */
/*   Updated: 2020/12/20 19:50:47 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# define CHALLENGE_CAST_COUNT 25
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public virtual ClapTrap {
private:
public:
	NinjaTrap();
	NinjaTrap(std::string newName);
	NinjaTrap(NinjaTrap const & ninjaTrap);
	NinjaTrap & operator=(NinjaTrap const & rhs);
	~NinjaTrap();
	void ninjaShoebox(NinjaTrap const & rhs);
	void ninjaShoebox(ScavTrap const & rhs);
	void ninjaShoebox(FragTrap const & rhs);
};

#endif

