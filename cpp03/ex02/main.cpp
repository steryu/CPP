/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 12:04:28 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	
	ClapTrap Clap("Carnvine");
	ScavTrap Mochi("Mochi");
	FragTrap Frog("Froggy");
	std::cout << std::endl;

	Mochi.attack("Froggy");
	Frog.takeDamage(20);
	Mochi.attack("Froggy");
	Frog.takeDamage(20);
	Frog.beRepaired(20);
	Clap.beRepaired(10);
	Mochi.attack("Froggy");
	Mochi.attack("Froggy");
	Frog.takeDamage(40);
	Clap.setAttackDamage(100);
	Clap.attack("Mochi");
	Mochi.takeDamage(100);
	Frog.highFivesGuys();
	std::cout << std::endl;

	return (0);
}