/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:48:53 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/19 14:48:54 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
	: name("AForm 1"), GradeSign(5), GradeExecute(10), target("Default"){
	isSigned = false;
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(const std::string newName, const int newGradeSign, const int newGradeExecute, std::string newTarget)
	: name(newName), GradeSign(newGradeSign), GradeExecute(newGradeExecute), target(newTarget){
		isSigned = false;
	if (newGradeSign < 1)
		throw(GradeTooHighException());
	if (newGradeSign > 150)
		throw(GradeTooLowException());
	if (newGradeExecute < 1)
		throw(GradeTooHighException());
	if (newGradeExecute > 150)
		throw(GradeTooLowException());
	std::cout << "AForm made" << std::endl;
}

AForm::~AForm(){
	// std::cout << "AForm destroyed" << std::endl;
}

AForm::AForm(const AForm &other) 
	: name(other.name), isSigned(other.isSigned),
	GradeSign(other.GradeSign), GradeExecute(other.GradeExecute), target(other.target){
	std::cout << "AForm copied" << std::endl;
}

AForm& AForm::operator=(const AForm &other){
	isSigned = other.isSigned;
	return(*this);
	std::cout << "AForm copied using an assignment" << std::endl;
}

int	AForm::getGradeSigned() const{
	return (GradeSign);
}

int	AForm::getGradeExecute() const{
	return (GradeExecute);
}

std::string AForm::getName() const{
	return (name);
}

bool	AForm::getisSinged(){
	return (isSigned);
}

std::string AForm::getTarget() const{
	return (target);
}

void	AForm::setTarget(std::string newTarget){
	target = newTarget;
}

void	AForm::beSigned(Bureaucrat &b){
	if (b.getGrade() <= GradeSign)
		isSigned = true;
	else
		throw(GradeTooLowException());
}

void	AForm::checkForm(Bureaucrat const & b) const{
	if (isSigned == false)
		throw(FormNotSigned());
	if (b.getGrade() > GradeExecute)
		throw(GradeTooLowException());
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

const char*	AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

const char*	AForm::FormNotSigned::what() const throw(){
	return ("Form it not signed!");
}

std::ostream& operator<<(std::ostream& out, AForm& f){
	out << f.getName() << " requires Grade " << f.getGradeSigned() << " to sign and Grade "\
	<< f.getGradeExecute() << " to execute it, the Aform is ";
	if (f.getisSinged() == false)
		out << "not signed";
	if (f.getisSinged() == true)
		out << "signed" << std::endl;
	return (out);
}
