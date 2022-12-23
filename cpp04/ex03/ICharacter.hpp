/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:46:36 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/19 11:38:40 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__
#include "AMateria.hpp"
#include <iostream>

class ICharacter{
protected:
private:
public:
	ICharacter();
	virtual ~ICharacter();
	ICharacter(const ICharacter &other);
	ICharacter& operator=(const ICharacter &other);

	virtual std::string const & getName() const = 0;
	// virtual void equip(AMateria* m) = 0;
	// virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
