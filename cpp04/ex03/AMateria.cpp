/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:34:33 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/23 13:30:55 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	type = "unknown";
	std::cout << "Defualt AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &ntype){
	type = ntype;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "AMateria destroyed" << std::endl;
}

AMateria::AMateria(const AMateria &other){
	*this = other;
	std::cout << "AMateria copied" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other){
	type = other.type;
	return(*this);
	std::cout << "AMateria copied using an assignment" << std::endl;
}

// void	AMateria::use(ICharacter& target){
// 	std::cout << target.getName() << std::endl;
// }