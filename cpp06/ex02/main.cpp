/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:01 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/23 13:03:52 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	srand(time(0));
	int n = 1 + (rand() % 3);
	Base *base;
	switch(n)
	{
		case 1:
			base = new A();
			std::cout << "randomly generated A" << std::endl;
			break;
		case 2:
			base = new B();
			std::cout << "randomly generated B" << std::endl;
			break;
		case 3:
			base = new C();
			std::cout << "randomly generated C" << std::endl;
			break;
		default:
			return (0);
			break ;
	}
	return (base);
}

void identify(Base* p){
	A *a = dynamic_cast<A *>(p);
	if (a != nullptr)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B *>(p);
	if (b != nullptr)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C *>(p);
	if (c != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	A &a = dynamic_cast<A &>(p);
	if (&a != nullptr)
		std::cout << "A" << std::endl;
	B &b = dynamic_cast<B &>(p);
	if (&b != nullptr)
		std::cout << "B" << std::endl;
	C &c = dynamic_cast<C &>(p);
	if (&c != nullptr)
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base *ptr = generate();
	identify(ptr);
	identify(ptr);
	delete ptr;
	return (0);
}