/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:46:37 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 12:47:27 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"

int	main(void){
	const Animal* animalObjects[10];
	Cat* kitty = new Cat();
	Dog* lab = new Dog();
	for (int i = 0; i < 5; i++){
		animalObjects[i] = new Cat();
	}
	for (int i = 5; i < 10; i++){
		animalObjects[i] = new Dog();
	}
	std::cout << std::endl;
	std::cout << animalObjects[1]->getType() << " " << std::endl;
	std::cout << animalObjects[6]->getType() << " " << std::endl;
	animalObjects[1]->makeSound();
	animalObjects[6]->makeSound();
	std::cout << std::endl;

	kitty->setIdea(0, "tuna melt");
	lab->setIdea(0, "foood");
	std::cout << kitty->getIdea(0) << std::endl;
	std::cout << lab->getIdea(0) << std::endl;
	std::cout << std::endl;

	delete kitty;
	delete lab;
	for (int i = 0; i < 10; i++){
		delete animalObjects[i];
	}
	return (0);
}