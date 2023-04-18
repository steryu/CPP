#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "Error: no input" << std::endl;
		return (0);
	}
	PmergeMe PmergeMe;
	for (int i = 1; i < argc; i++){
		if (argv[i][0] != ' '){
			int check = PmergeMe.initSequence(argv[i]);
			if (check == 1)
				return (1);
		}
	}
	PmergeMe.start();
	return (0);
}