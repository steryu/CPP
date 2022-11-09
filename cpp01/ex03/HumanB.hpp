/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:00:43 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/09 14:12:19 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
private:
	std::string name;
	Weapon		*weapon;
public:
	HumanB(std::string newName);
	void	setWeapon(Weapon& weapon);
	void	setType(const std::string weapon);
	void	attack();
};

#endif