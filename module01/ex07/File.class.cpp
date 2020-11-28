/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:34:23 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/27 14:34:26 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(std::string newReplaceable, std::string newReplacing): replaceable(newReplaceable), replacing(newReplacing)
{
	return;
}

File::~File() {
	return;
}

bool File::IsRewritingFile() {

	std::string answer;

	while (std::cin >> answer) {
		if (answer == "YES" or answer == "Y")
		{
			return true;
		}
		else if(answer == "NO" or answer == "N")
		{
			return false;
		}
	}
	return false;
}

bool File::CheckFileExist(std::string fileName) {
	std::ifstream checkNameFile(fileName);
	if (checkNameFile.is_open())
	{
		checkNameFile.close();
		return true;
	}
	checkNameFile.close();
	return false;
}

bool File::FileForWrite(std::string fileName) {
	if (CheckFileExist(fileName)) {
		std::cout << ERROR_FILE_DO_EXIST_MESSAGE(fileName)  << std::endl;
		if (IsRewritingFile()){
			return true;
		}
		else
		{
			return false;
		}

	}
	return true;
}

void File::WriteToFile(std::ifstream &file, std::ofstream &newFile) {
	while ((newFile.is_open()))
	{
		std::string::size_type n = 0;
		std::string tempLine;
		if (!getline(file, tempLine))
		{
			file.close();
			break;
		}
		while ((n = tempLine.find( replaceable, n)) != std::string::npos )
		{
			tempLine.replace( n, replaceable.size(), replacing );
			n += replacing.size();
		}
		tempLine.push_back('\n');
		newFile << tempLine;
	}
}

