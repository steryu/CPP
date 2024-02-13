/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 14:24:31 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap Clap("Carnvine");
	ClapTrap Mochi("Mochi");

	Clap.setAttackDamage(4);
	Clap.attack(Mochi.getName());
	Mochi.takeDamage(4);
	Mochi.beRepaired(4);
	Mochi.setAttackDamage(10);
	Mochi.attack(Clap.getName());
	Clap.takeDamage(10);
	Clap.attack("Mochi");
	Clap.beRepaired(10);
	return (0);
}