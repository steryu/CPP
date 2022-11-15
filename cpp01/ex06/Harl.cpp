/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:39:45 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/15 16:43:52 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love buying toys for my new kitten, I really do!\n" << std::endl;
}

void	Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe buying toys costs more money. If I didn't have a new kitten, I wouldn’t need more.\n" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some toys for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Not cool! I want to speak to the manager, now!\n" << std::endl;
}

void	Harl::complain(std::string level){
	int i = 0;
	char chr = level[0];
	switch (chr){
		case 'D':
			i = 0;
			break ;
		case 'I':
			i = 1;
			break ;
		case 'W':
			i = 2;
			break ;
		case 'E':
			i = 3;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			exit(EXIT_SUCCESS);
	}
	static std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fn[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4){
			(this->*fn[i])();
			i++;
	}
}