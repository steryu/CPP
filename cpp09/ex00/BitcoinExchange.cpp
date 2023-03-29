#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::cout << "Default BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange(){
	std::cout << "BitcoinExchange destroyed" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
	std::cout << "BitcoinExchange copied" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){
	return(*this);
	std::cout << "BitcoinExchange copied using an assignment" << std::endl;
}

