/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:18:45 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 14:30:21 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default ScavTrap constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string newName){
	Name = newName;
	std::cout << "ScavTrap constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	*this = other;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &other){
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if (HitPoints <= 0){
		std::cout << Name << " can't attack because it's dead :(" << std::endl;
		return ;
	}
	if (EnergyPoints != 0){
		std::cout << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!!" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << Name << " does not enough have energy points to attack" << std::endl;
}

void	ScavTrap::quardGate(){
	std::cout << Name << " is now in Gate keeper mode, attacks will be 50% less effective" << std::endl;
}