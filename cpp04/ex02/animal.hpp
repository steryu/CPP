/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:58:45 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 14:20:16 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__
#include <iostream>

class Animal{
private:
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &other);
	Animal& operator=(const Animal &other);
	virtual void	makeSound() const = 0;
	std::string getType() const;
protected:
	std::string type;
};

#endif