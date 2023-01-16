/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:33:58 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/13 12:13:07 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	Bureaucrat haseeb(10);
	Form form;
	std::cout << std::endl;

	std::cout << haseeb << std::endl;
	std::cout << form << std::endl;
	try
	{
		haseeb.IncrementGrade(4);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << haseeb << std::endl;
	haseeb.signForm(form);
	try
	{
		haseeb.IncrementGrade(2);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	haseeb.signForm(form);
	std::cout << form << std::endl;

	std::cout << "----- TESTS -----" << std::endl;
	std::cout << "[INVALID FORM GRADES]" << std::endl;
	try 
	{
		Form("form 3", 160, 10);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "[BUREAUCRAT GRADE = 0]" << std::endl;
	try 
	{
		Bureaucrat yo;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
