/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:25:18 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 14:55:41 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
private:
public:
	FragTrap();
	FragTrap(std::string newName);
	~FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap& operator=(const FragTrap &other);
	void	highFivesGuys(void);
	void	attack(const std::string& target);
};