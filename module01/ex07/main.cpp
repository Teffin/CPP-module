/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:57:26 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/27 14:34:41 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "File.hpp"
#define ERROR_FILE_MESSAGE "Couldn't open file"
#define NEW_FILE_NAME(X) X + ".replace"
#define DATA_IO(var_) {std::cout << "Please, input " << #var_ << ": "; std::cin >> var_;}


int main( void ) {

	std::string fileName;
	std::string replaceable;
	std::string replacing;
	DATA_IO(fileName);
	DATA_IO(replaceable);
	DATA_IO(replacing);
	std::ifstream file(fileName);
	if (file.is_open())
	{
		File *fileWorker = new File(replaceable, replacing);
		if (fileWorker->FileForWrite(NEW_FILE_NAME(fileName)))
		{
			std::ofstream newFile(NEW_FILE_NAME(fileName));
			fileWorker->WriteToFile(file, newFile);
		}
		else
		{
			std::ofstream newFile(NEW_FILE_NAME(fileName), std::ios::app);
			fileWorker->WriteToFile(file, newFile);
		}
		file.close();
	}
	else
	{
		std::cout << ERROR_FILE_MESSAGE << std::endl;
	}
}
