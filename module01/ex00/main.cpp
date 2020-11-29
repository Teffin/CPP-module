/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 09:51:52 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 09:51:53 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void pony_on_stack() {
	Pony pony("Karlen");
	pony.make_it_do_some_stuff();
}

void pony_on_heap() {
	Pony *pony;
	pony = new Pony("Sarah");
	pony->make_it_do_some_stuff();
	delete pony;
}

int main( void )
{
	pony_on_stack();
	pony_on_heap();
}

