/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:04:57 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/29 19:04:58 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define SKILL_CAST_COUNT 25
# define DEFAULT_NAME "Default"
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
	void tripleclocked(std::string const & target);
	void surprisedStabilize(std::string const & target);
	void deathMachine(std::string const & target);
	FragTrap();
public:
	FragTrap(std::string newName);
	FragTrap(FragTrap const & fragTrap);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
};

typedef void(FragTrap::* skills) (std::string const & target);

#endif
