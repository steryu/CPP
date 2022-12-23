/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:41:54 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/18 16:42:10 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__
#include "AMateria.hpp"

class Ice : public AMateria{
protected:
private:
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &other);
	Ice& operator=(const Ice &other);
};

#endif
