/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/12 16:12:21 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	
	ClapTrap Clap("Carnvine");
	ScavTrap Mochi("Mochi");

	Clap.attack("Mochi");
	Mochi.quardGate();
	Mochi.attack("Carnvine");
	Clap.takeDamage(20);
	return (0);
}