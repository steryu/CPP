/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:00:28 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/15 15:34:27 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__
#include "animal.hpp"

class Cat : public Animal{
private:
public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	void	makeSound() const;
};

#endif