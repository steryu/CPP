/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:42:25 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/18 16:48:18 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
	std::cout << " Defualt Cure constructor called" << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure destroyed" << std::endl;
}

Cure::Cure(const Cure &other){
	type = other.type;
	std::cout << "Cure copied" << std::endl;
}

Cure& Cure::operator=(const Cure &other){
	type = other.type;
	return(*this);
	std::cout << "Cure copied using an assignment" << std::endl;
}

