/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 15:04:59 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){
	
	ClapTrap Clap("Carnvine");
	ScavTrap Mochi("Mochi");
	FragTrap Frog("Froggy");
	DiamondTrap Monsta("Monsta");
	std::cout << std::endl;

	Monsta.whoAmI();
	Mochi.attack("Froggy");
	Frog.takeDamage(20);
	Monsta.attack("Froggy");
	Frog.takeDamage(20);
	Frog.beRepaired(20);
	Monsta.beRepaired(10);
	Clap.beRepaired(10);
	Monsta.attack("Froggy");
	Monsta.attack("Froggy");
	Frog.takeDamage(40);
	Clap.setAttackDamage(100);
	Clap.attack("Monsta");
	Monsta.takeDamage(100);
	Frog.highFivesGuys();

	std::cout << std::endl;

	return (0);
}