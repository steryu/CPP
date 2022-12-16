/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:35 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 12:51:09 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		ideas[i] = "Empty";
	std::cout << "A brain with empty ideas has been constructed" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain &other){
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain &other){
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, std::string idea){
	ideas[i] = idea;
}

std::string	Brain::getIdea(int i){
	return (ideas[i]);
}