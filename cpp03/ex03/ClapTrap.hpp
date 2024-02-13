/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:09 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 14:37:13 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string Newname);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator= (const ClapTrap &other);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string getName();
	void		setAttackDamage(int NewAttackDamage);
protected:
	std::string Name;
	int 		HitPoints;
	int 		EnergyPoints;
	int 		AttackDamage;
};

#endif