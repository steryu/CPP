/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:18:48 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 11:53:03 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
public:
	ScavTrap(std::string newName);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator= (const ScavTrap &other);
	void	quardGate();
	void	attack(const std::string& target);
};