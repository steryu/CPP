/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:52:39 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/04 14:02:33 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string hordeName;
	std::cout << "How do you want to call your zombie horde?" << std::endl;
	std::getline(std::cin, hordeName);
	int N;
	std::cout << "How many zombies do you want to create?" << std::endl;
	std::cin >> N;
	Zombie *Horde = zombieHorde(N, hordeName);
	if (N == 1)
		std::cout << "\033[0;32m" << N << " Zombie made\033[0;37m" << std::endl;
	else
		std::cout << "\033[0;32m" << N << " Zombies made\033[0;37m" << std::endl;
	for (int i = 0; i < N; i++){
		std::cout << i + 1 << ": ";
		Horde[i].announce();
	}
	delete[](Horde);
	return (0);
}