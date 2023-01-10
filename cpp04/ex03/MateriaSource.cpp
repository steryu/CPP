/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:34:47 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/10 13:25:38 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		Materia[i] = "s";
	}
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other){
	*this = other;
	std::cout << "MateriaSource copied" << std::endl;
}

// MateriaSource& MateriaSource::operator=(const MateriaSource &other){
// 	return(*this);
// 	std::cout << "MateriaSource copied using an assignment" << std::endl;
// }


AMateria* MateriaSource::createMateria(std::string const & type){
	return (new AMateria(type));
}
