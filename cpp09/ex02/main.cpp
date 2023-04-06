#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "Error: no input" << std::endl;
		return (0);
	}
	PmergeMe PmergeMe;
	// checkInput(**argv);
	for (int i = 1; i < argc; i++){
		if (argv[i][0] != ' '){
			PmergeMe.initSequence(argv[i]);
		}
	}
	PmergeMe.start();
	return (0);
}