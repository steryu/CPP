/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:34:50 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/19 11:33:42 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
protected:
	std::string	Materia[4];
private:
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &other);
	// MateriaSource& operator=(const MateriaSource &other);

		// virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
