/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:42:30 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/17 13:27:23 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceLine(std::string line, size_t found, std::string s1, std::string s2){
	int	length = s1.size();
	line.erase(found, length);
	line.insert(found, s2);
	return (line);
}

void	readString(std::fstream &file, std::string s1, std::string s2){
	std::string	line;
	std::fstream newFile;
	if (s1[0] == '\0')
		return ;
	newFile.open("newFile.replace", std::ios::out);
	while (1){
		std::getline (file, line);
		int length = line.length();
		size_t found = line.find(s1);
		while (found < length){
			if (found == 0)
				line = replaceLine(line, found, s1, s2);
			size_t found = line.find(s1, found + 1);
			if (found != std::string::npos)
				line = replaceLine(line, found, s1, s2);
			if (found >= length)
				break ;
		}
		newFile << line << std::endl;
		if (file.eof())
			break ;
	}
}
