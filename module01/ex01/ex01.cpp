/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:47:21 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/21 13:47:23 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
	panther = nullptr;

	std::string pantherOnSteak = std::string("String panther");
	std::cout << pantherOnSteak << std::endl;
}

int	main()
{
	memoryLeak();
}