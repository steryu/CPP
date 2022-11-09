/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:58:08 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/09 13:06:35 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon)
	: name(newName), weapon(newWeapon)
{
}

void	HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}