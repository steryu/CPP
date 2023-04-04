#include "RPN.hpp"

int	exitError(std::string str){
	std::cout << "Error: " << str << std::endl;
	exit(1);
}

int	main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Error" << std::endl;
		exit(1);
	}
	RPN rpn;
	rpn.readInput(argv[1]);
	return (0);
}