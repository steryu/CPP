/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:33:58 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/11 15:36:27 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	Bureaucrat cat(10);
	std::cout << std::endl;

	std::cout << cat << std::endl;
	try
	{
		cat.IncrementGrade(4);
		cat.DecrementGrade(200);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[WHEN GRADE = 0]" << std::endl;
	try 
	{
		Bureaucrat yo;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
