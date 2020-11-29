/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 09:51:27 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 09:51:29 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
class Pony
{
private:
	std::string	name;

public:
	Pony( std::string newName );
	~Pony( void );
	void make_it_do_some_stuff( void );
};

#endif