/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:46:37 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 15:10:21 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"

int	main(void){
	const Dog* temp = new Dog();
	const Dog* doggy = new Dog();
	std::cout << std::endl;
	std::cout << std::endl;
	const Animal* meta = new Cat();
	doggy->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	Cat* kitty = new Cat();
	Dog* lab = new Dog();
	kitty->setIdea(0, "tuna melt");
	lab->setIdea(0, "foood");
	std::cout << kitty->getIdea(0) << std::endl;
	std::cout << lab->getIdea(0) << std::endl;
	std::cout << std::endl;

	delete kitty;
	delete lab;
	delete doggy;
	delete temp;
	return (0);
}