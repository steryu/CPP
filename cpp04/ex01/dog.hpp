/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:01:13 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 12:44:48 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__
#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal{
private:
	Brain* brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	void	makeSound() const;
	void		setIdea(int i, std::string);
	std::string	getIdea(int i);
};

#endif