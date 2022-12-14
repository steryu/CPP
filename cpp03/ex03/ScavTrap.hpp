/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:18:48 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 14:55:23 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
private:
public:
	ScavTrap();
	ScavTrap(std::string newName);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator= (const ScavTrap &other);
	void	quardGate();
	void	attack(const std::string& target);
};