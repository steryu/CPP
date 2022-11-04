/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:57:20 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/03 16:04:41 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(){
	std::cout << "\033[0;31m" << name << ": Destroyed" << "\033[0;37m" << std::endl;
}

void	Zombie::announce(){
	std::cout << name << " -> Hello!" << std::endl;
}

void	Zombie::setName(std::string Newname){
	name = Newname;
}