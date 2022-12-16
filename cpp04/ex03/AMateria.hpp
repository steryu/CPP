/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:22:48 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 17:25:33 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__
#include <iostream>

class AMateria{
protected:
	
public:
	AMateria();
	AMateria(std::string const &type);
	~AMateria();

	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	// virtual void	use(ICharacter& target);
private:
};