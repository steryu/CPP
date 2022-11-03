/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:32:03 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/03 11:07:03 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string newName);
};
	Zombie *newZombie(std::string name);
	void	randomChump(std::string chumpName);
#endif