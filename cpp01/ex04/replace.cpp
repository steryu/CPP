/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:42:30 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/14 14:35:43 by svan-ass         ###   ########.fr       */
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
	int nb = 1;
	int Lnb = 1;
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
			{
				std::cout << Lnb << " " << nb << " FOUND at: " << found << std::endl;
				nb++;
				line = replaceLine(line, found, s1, s2);
			}
			if (found >= length)
				break ;
		}
		newFile << line << std::endl;
		Lnb++;
		if (file.eof())
			break ;
	}
	std::cout << "\ns1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;
	
}
