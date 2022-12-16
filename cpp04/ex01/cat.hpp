/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:00:28 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 12:41:24 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__
#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal{
private:
	Brain* brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	void	makeSound() const;
	void		setIdea(int i, std::string);
	std::string	getIdea(int i);
};

#endif