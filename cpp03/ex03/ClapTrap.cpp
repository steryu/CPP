/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:05 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 14:37:44 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) :
	Name(newName),
	HitPoints(10),
	EnergyPoints(10),
	AttackDamage(0){
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

std::string ClapTrap::getName(){
	return (Name);
}

void	ClapTrap::setAttackDamage(int NewAttackDamage){
	AttackDamage = NewAttackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &other){
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
		std::cout << Name << " died" << std::endl;
		return ;
	}
	std::cout << Name << " took " << amount << " points of damage " << std::endl;
	HitPoints -= amount;
	std::cout << Name << " has " << HitPoints << " Hitpoints" << std::endl;
	if (HitPoints <= 0)
		std::cout << Name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (HitPoints <= 0){
		std::cout << Name << " can't repair itself because it's dead :(" << std::endl;
		return ;
	}
	if (EnergyPoints != 0){
		std::cout << Name << " repeared itself by " << amount << " hitpoints " << std::endl;
		HitPoints += amount;
		std::cout << Name << " has now " << HitPoints << " Hitpoints" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << Name << " does not have enough energy points to repair itself" << std::endl;
	
}
