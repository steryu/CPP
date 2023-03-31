#include "BitcoinExchange.hpp"

int	exitError(std::string str){
	std::cout << "Error: " << str << std::endl;
	exit(1);
}

int	main(int argc, char **argv)
{	
	if (argc != 2)
		exitError("could not open file");
	BitcoinExchange btc;
	btc.readFile(argv[1]);
	return (0);
}