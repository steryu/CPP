/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:05 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 14:24:10 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Newname){
	Name = Newname;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

std::string ClapTrap::getName(){
	return (Name);
}

void	ClapTrap::setAttackDamage(int NewAttackDamage){
	AttackDamage = NewAttackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &other){
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (HitPoints <= 0){
		std::cout << "ClapTrap " << Name << " can't attack because it's dead :(" << std::endl;
		return ;
	}
	if (EnergyPoints != 0){
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << Name << " does not enough have energy points to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (HitPoints <= 0){
		std::cout << "ClapTrap " << Name << " died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " took " << amount << " points of damage " << std::endl;
	HitPoints -= amount;
	std::cout << "ClapTrap " << Name << " has " << HitPoints << " Hitpoints" << std::endl;
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (HitPoints <= 0){
		std::cout << "ClapTrap " << Name << " can't repair itself because it's dead :(" << std::endl;
		return ;
	}
	if (EnergyPoints != 0){
		std::cout << "ClapTrap " << Name << " repeared itself by " << amount << " hitpoints " << std::endl;
		HitPoints += amount;
		std::cout << "ClapTrap " << Name << " has now " << HitPoints << " Hitpoints" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << Name << " does not have enough energy points to repair itself" << std::endl;
	
}