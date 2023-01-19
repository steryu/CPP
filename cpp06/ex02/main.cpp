/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:01 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/19 16:26:11 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	int n = 1 + (rand() % 3);
	Base *base;
	switch(n)
	{
		case 1:
			base = new A();
			break;
		case 2:
			base = new B();
			break;
		case 3:
			base = new C();
			break;
	}
	return (base);
}

void identify(Base* p){
	std::cout << p << std::endl;
}

void identify(Base& p){
	std::cout << &p << std::endl;
}

int	main(void)
{
	Base *ptr = generate();
	identify(ptr);
	return (0);
}