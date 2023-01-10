/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:35:23 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/10 13:26:08 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"

int	main(void){
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	delete src;
	return (0);
}