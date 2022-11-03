/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:58:14 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/03 11:05:53 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;
	std::string zombienames[] = {"Kumo", "Toru", "Shiro", "Haru"};
	std::string chumpnames[] = {"Boter", "Tommy", "Tinto"};
	for (int i = 0; i < 4; i++)
	{
		zombie = newZombie(zombienames[i]);
		zombie->announce();
		delete(zombie);
	}
	std::cout << "\n\033[1;37mChump Zombies:\033[0;37m" << std::endl;
	for (int i = 0; i < 3; i++)
		randomChump(chumpnames[i]);
	return (0);
}