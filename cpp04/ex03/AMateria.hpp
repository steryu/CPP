/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:34:36 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/23 13:30:47 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__
#include "ICharacter.hpp"
#include <iostream>

class AMateria{
protected:
	std::string type;
private:
public:
	AMateria();
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria(const AMateria &other);
	AMateria& operator=(const AMateria &other);

	// std::string const & getType() const;
	// virtual AMateria* clone() const;
	// virtual void	use(ICharacter& target);
};

#endif
