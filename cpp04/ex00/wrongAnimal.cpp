/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:16:54 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 13:39:53 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "The WrongAnimal constructor has been called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	this->type = other.type;
	return (*this);
}

std::string WrongAnimal::getType() const{
	return (type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "Default wrongAnimal sound" << std::endl;
}