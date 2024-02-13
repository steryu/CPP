/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:09 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/12 15:54:53 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{
private:
	std::string Name;
	int 		HitPoints;
	int 		EnergyPoints;
	int 		AttackDamage;
public:
	ClapTrap(std::string Newname);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator= (const ClapTrap &other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string getName();
	void		setAttackDamage(int NewAttackDamage);
};