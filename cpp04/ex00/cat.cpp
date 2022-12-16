/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:28:19 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 13:28:18 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(){
	std::cout << "A Cat has been constructed" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat &other){
	*this = other;
}

Cat& Cat::operator=(const Cat &other){
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}