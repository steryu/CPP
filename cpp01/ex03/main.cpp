/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:54:51 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/16 15:08:18 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
	Weapon bite = Weapon("sharp kitty bite");
	HumanA shiro("shiro", bite);
	shiro.attack();
	bite.setType("some other type of kitty attack");
	shiro.attack();
	}
	std::cout << std::endl;
	{
	Weapon bite = Weapon("sharp kitty bite");
	HumanB toru("Toru");
	toru.setWeapon(bite);
	toru.attack();
	bite.setType("some other type of kitty attack");
	toru.attack();
	}
	return(0);
}

