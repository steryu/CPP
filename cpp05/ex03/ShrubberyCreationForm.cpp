#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
	: AForm("ShrubberyCreationForm", 145, 137, "none"){
	std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget)
	: AForm("ShrubberyCreationForm", 145, 137, newTarget){
	std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget()){	
	*this = other;
	std::cout << "ShrubberyCreationForm copied" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget();
	return(*this);
	std::cout << "ShrubberyCreationForm copied using an assignment" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	checkForm(executor);
	std::ofstream MyFile;
	MyFile.open (getTarget() + "_shrubbery");
	MyFile <<
			"  oxoxoo    ooxoo\n"
			" ooxoxo oo  oxoxooo\n"
			"oooo xxoxoo ooo ooox\n"
			"oxo o oxoxo  xoxxoxo\n"
			" oxo xooxoooo o ooo\n"
			"  ooo\\oo\\  /o/o\n"
			"	  \\  \\/ /\n"
			"	   |   /\n"
			"	   |  |\n"
			"	   |  |\n"
			"	   |  |\n"
			"	   |  |\n"
			"__\\/__/____\\__\\/___";
  MyFile.close();
}
