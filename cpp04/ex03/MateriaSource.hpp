/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:34:50 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/10 13:15:08 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
protected:
private:
	std::string	Materia[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &other);
	// MateriaSource& operator=(const MateriaSource &other);

		// virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
