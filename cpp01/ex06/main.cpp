/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:38:34 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/15 15:56:48 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	
	if (argc != 2)
		std::cout << "only one parameter please: DEBUG, INFO, WARNING of ERROR." << std::endl;
	
	Harl level;
	level.complain(argv[1]);
	return (0);
}