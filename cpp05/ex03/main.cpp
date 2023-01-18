/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:33:58 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/18 15:24:59 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void){
	Intern someRandomIntern;
	AForm *scr, *rrf, *ppr;
	std::cout << std::endl;

	std::cout << "[CREATING FORM 1]" << std::endl;
	scr = someRandomIntern.makeForm("shrubbery request", "Bender");
	std::cout << scr->getTarget() << std::endl;
	std::cout << std::endl;

	std::cout << "[CREATING FORM 2]" << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "mochi");
	std::cout << rrf->getTarget() << std::endl;
	std::cout << std::endl;

	std::cout << "[CREATING FORM 3]" << std::endl;
	ppr = someRandomIntern.makeForm("presidential request", "King");
	std::cout << ppr->getTarget() << std::endl;
	std::cout << std::endl;

	std::cout << "[CREATING A NON EXITING FORM]" << std::endl;
	ppr = someRandomIntern.makeForm("random request", "none");
	std::cout << std::endl;
}
