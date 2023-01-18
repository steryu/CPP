/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:33:58 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/18 14:19:39 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void){
	Bureaucrat bc(10);
	ShrubberyCreationForm form1("home");
	RobotomyRequestForm form2("mochi");
	PresidentialPardonForm form3("The King");
	std::cout << std::endl;

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << std::endl;
	std::cout << bc << std::endl;
	try
	{
		bc.IncrementGrade(2);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bc << std::endl;
	std::cout << std::endl;
	try
	{
		bc.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bc.DecrementGrade(10);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[EXECUTING FORM1]" << std::endl;
	std::cout << bc << std::endl;
	try
	{
		bc.executeForm(form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[EXECUTING FORM2]" << std::endl;
	try
	{
		bc.signForm(form2);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bc.executeForm(form2);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[EXECUTING FORM 3]" << std::endl;
	try
	{
		bc.signForm(form3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bc.executeForm(form3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bc.IncrementGrade(15);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bc << std::endl;
	std::cout << std::endl;
	try
	{
		bc.executeForm(form3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "----- TESTS -----" << std::endl;
	Bureaucrat bc1(150);
	try
	{
		bc1.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bc1.executeForm(form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
