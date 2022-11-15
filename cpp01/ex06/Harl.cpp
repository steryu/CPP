/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:39:45 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/15 15:57:31 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "I love buying toys for my new kitten, I really do!" << std::endl;
	exit(EXIT_SUCCESS);
}

void	Harl::info(void){
	std::cout << "I cannot believe buying toys costs more money. If I didn't have a new kitten, I wouldn’t need more." << std::endl;
	exit(EXIT_SUCCESS);
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some toys for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	exit(EXIT_SUCCESS);
}

void	Harl::error(void){
	std::cout << "Not cool! I want to speak to the manager now." << std::endl;
	exit(EXIT_SUCCESS);
}

void	Harl::complain(std::string level){

	switch (level){
		case 'D':
			std::cout << "DEBUG" << std::endl;
	}

	// void (Harl::*fn[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	// std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// for (int i = 0; i < 4; i++){
	// 	if(str[i] == level)
	// 		(this->*fn[i])();
	// }
}