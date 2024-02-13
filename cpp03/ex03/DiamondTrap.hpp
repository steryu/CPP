/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:55:00 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 15:00:17 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string Name;
	using 		FragTrap::HitPoints;
	using 		ScavTrap::EnergyPoints;
	using 		FragTrap::AttackDamage;
public:
	DiamondTrap();
	DiamondTrap(std::string newName);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap& operator=(const DiamondTrap &other);
	void	whoAmI();
	void	attack(const std::string& target);
};