/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:29:51 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 15:10:41 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(){
	std::cout << "A Dog has been constructed" << std::endl;
	this->type = "Dog";
	brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog destroyed" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &other){
	type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	*this = other;
}

Dog& Dog::operator=(const Dog &other){
	this->type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}

void	Dog::setIdea(int i, std::string idea){
	brain->setIdea(i, idea);
}

std::string	Dog::getIdea(int i){
	return (brain->getIdea(i));
}