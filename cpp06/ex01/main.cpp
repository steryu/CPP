/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:48:23 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/19 15:45:47 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Data{
public:
	int 		integer;
	std::string	str;
};

uintptr_t	serialize(Data * ptr){
	uintptr_t i = reinterpret_cast<std::uintptr_t>(ptr);
	return (i);
}

Data*	deserialize(uintptr_t raw){
	Data *ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main(void)
{
	Data data;
	data.integer = 1;
	data.str = "hoi";

	unsigned int i = serialize(&data);
	Data *ptr = deserialize(i);

	std::cout << "original pointer: " << &data << std::endl;
	std::cout << "return value:     " << &ptr << std::endl;
}
