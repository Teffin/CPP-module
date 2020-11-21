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

class Pony
{
private:
	int		color;
	int 	weight;
	int 	height;
	bool 	horn;
	bool 	male;

public:
	Pony( void );
	~Pony( void );
	void ponyOnTheStack();
	void ponyOnTheHeap();
	void make_it_do_some_stuff( void );
};

#endif