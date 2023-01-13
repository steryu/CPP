/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:28:19 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 15:10:09 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(){
	std::cout << "A Cat has been constructed" << std::endl;
	this->type = "Cat";
	brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat destroyed" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &other){
	type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	*this = other;
}

Cat& Cat::operator=(const Cat &other){
	this->type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(int i, std::string idea){
	brain->setIdea(i, idea);
}

std::string	Cat::getIdea(int i){
	return (brain->getIdea(i));
}