/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:42:17 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/18 16:42:20 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__
#include "AMateria.hpp"

class Cure : public AMateria{
protected:
private:
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &other);
	Cure& operator=(const Cure &other);
};

#endif
