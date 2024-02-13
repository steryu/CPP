/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:01:28 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/14 14:59:33 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : Name("default"){
		std::cout << "Default ClapTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName) : Name(newName){
	ClapTrap::Name = (newName + "_clap_name");
	ClapTrap::HitPoints = FragTrap::HitPoints;
	ClapTrap::EnergyPoints = ScavTrap::EnergyPoints;
	ClapTrap::AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << newName << " is constructed" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destroyed" << std::endl; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &other){
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other){
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name is " << Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}
