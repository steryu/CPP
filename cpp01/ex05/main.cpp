/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:38:40 by svan-ass          #+#    #+#             */
/*   Updated: 2022/11/15 16:30:09 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl level;
	
	level.complain("DEBUG");
	level.complain("INFO");
	level.complain("WARNING");
	level.complain("ERROR");
	return (0);
}