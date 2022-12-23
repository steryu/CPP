/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:05 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/19 11:41:22 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	name = "Default";
	std::cout << " Defualt Character constructor called" << std::endl;
}

Character::Character(std::string nName){
	name = nName;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character(){
	std::cout << "Character destroyed" << std::endl;
}

Character::Character(const Character &other){
	*this = other;
	std::cout << "Character copied" << std::endl;
}

Character& Character::operator=(const Character &other){
	name = other.name;
	return(*this);
	std::cout << "Character copied using an assignment" << std::endl;
}

std::string const & Character::getName() const{
	return (name);
}