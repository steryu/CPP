/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:54:05 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/09 14:00:29 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
	type = weapon;
}

const std::string Weapon::getType(){
	return (type);
}

void	Weapon::setType(const std::string weapon){
	type = weapon;
}
