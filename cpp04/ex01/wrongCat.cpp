/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:16:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 13:36:51 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "A WrongCat has been constructed" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << "bark bark" << std::endl;
}