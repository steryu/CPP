/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:45 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/16 15:09:47 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	exitMessage(std::string message){
	std::cout << message << std::endl;
	exit(EXIT_SUCCESS);
}

int main(int argc, char **argv){
	std::fstream file;

	if (argc != 4)
		exitMessage("only three arguments please: file, s1 and s2");
	file.open(argv[1], std::ios::in);
	if (!file)
		exitMessage("couldn't open file");
	readString(file, argv[2], argv[3]);
	file.close();
	return (0);
}