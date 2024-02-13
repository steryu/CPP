/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:25:21 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/13 14:28:44 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName) : ClapTrap(newName){
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "Fragtrap " << newName << " is constructed" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destroyed" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &other){
	*this = other;
	std::cout << "FragTrap copy constructor called" << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << Name << " gives the guys a highfives for being awesome" << std::endl;
}

void	FragTrap::attack(const std::string& target){
	if (HitPoints <= 0){
		std::cout << "FragTrap " << Name << " can't attack because it's dead :(" << std::endl;
		return ;
	}
	if (EnergyPoints != 0){
		std::cout << "FragTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << "FragTrap " << Name << " does not enough have energy points to attack" << std::endl;
}