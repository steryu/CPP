/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:38:51 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/02 14:02:14 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string zombiename){
	Zombie *temp;
	
	temp = new Zombie();
	temp->setName((zombiename));
	return (temp);
}
