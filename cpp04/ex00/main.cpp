/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:46:37 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 15:02:21 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"

int	main(void){
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	std::cout << std::endl;

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	return (0);
}