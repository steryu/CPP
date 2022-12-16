
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:05:09 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 16:29:37 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(){
	std::cout << "The animal constructor has been called" << std::endl;
	type = "Default Animal";
}

Animal::~Animal(){
	std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type){
	std::cout << "An Animal copy has been made" << std::endl;
}

Animal& Animal::operator=(const Animal &other){
	this->type = other.type;
	std::cout << "A Animal copy using an assignment has been made" << std::endl;
	return (*this);
}

std::string Animal::getType() const{
	return (type);
}

void	Animal::makeSound() const{
	std::cout << "Default Animal sound" << std::endl;
}