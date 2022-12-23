/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:42:14 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/18 16:47:49 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
	std::cout << " Defualt Ice constructor called" << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice destroyed" << std::endl;
}

Ice::Ice(const Ice &other){
	type = other.type;
	std::cout << "Ice copied" << std::endl;
}

Ice& Ice::operator=(const Ice &other){
	type = other.type;
	return(*this);
	std::cout << "Ice copied using an assignment" << std::endl;
}

