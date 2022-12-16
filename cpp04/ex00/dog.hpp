/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:01:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 15:34:40 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__
#include "animal.hpp"

class Dog : public Animal{
private:
public:
	Dog();
	~Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	void	makeSound() const;
};

#endif