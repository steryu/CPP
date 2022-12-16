/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:29:51 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 13:28:14 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(){
	std::cout << "A Dog has been constructed" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &other){
	*this = other;
}

Dog& Dog::operator=(const Dog &other){
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}