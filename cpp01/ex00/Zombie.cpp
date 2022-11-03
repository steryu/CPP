/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:34:47 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/02 14:15:30 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	name = "Zombie";
	std::cout << "\033[0;32m" << "new Zombie made" << "\033[0;37m" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "\033[0;31m" << name << ": Destroyed" << "\033[0;37m" << std::endl;
}

void	Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName){
	name = newName;
}