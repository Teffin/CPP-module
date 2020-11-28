/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:34:32 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/27 14:34:33 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CLASS_H
# define FILE_CLASS_H
# define ERROR_FILE_DO_EXIST_MESSAGE(X) X + " File is exist re-write him? Y/N"
# include <iostream>
# include <fstream>

class File {
private:
	std::string replaceable;
	std::string replacing;
public:
	File(std::string newReplaceable, std::string newReplacing);
	~File();
	void WriteToFile(std::ifstream &file, std::ofstream &newFile);
	bool FileForWrite(std::string fileName);
	bool CheckFileExist(std::string fileName);
	bool IsRewritingFile();
};

#endif
