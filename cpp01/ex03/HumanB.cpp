/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:46:03 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/09 14:16:57 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName){
	name = newName;
}

void	HumanB::attack(){
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their fluffy paws" << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon){
	weapon = &newWeapon;
}