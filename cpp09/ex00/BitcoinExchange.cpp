#include "BitcoinExchange.hpp"

void	BitcoinExchange::saveData(){
	std::ifstream mymap;
	std::string line;
	std::string date;
	std::string strRate;
	float rate;
	mymap.open("data.csv");
	if (mymap.is_open() == 0)
		exitError("could not open file");
	int i = 0;
	while (mymap){
		std::getline (mymap, line);
		if (i != 0 && !line.empty()){
			date = line.substr(0, 10);
			std::size_t pos = line.find(",");
			strRate = line.substr(pos + 1);
			rate = std::stof(strRate);
			btcmap[date] = rate;
		}
		i++;
	}
	// std::map<std::string, float>::iterator it = btcmap.begin();
	// while (it != btcmap.end()){
	// 	std::cout << it->first << " " << it->second << std::endl;
	// 	it++;
	// }
}

BitcoinExchange::BitcoinExchange(){
	invalid = false;
	saveData();
	std::cout << "The database has been saved" << std::endl;
}

BitcoinExchange::~BitcoinExchange(){
	std::cout << "BitcoinExchange destroyed" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
	std::cout << "BitcoinExchange copied" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){
	btcmap = other.btcmap;
	return(*this);
	std::cout << "BitcoinExchange copied using an assignment" << std::endl;
}

const char*	BitcoinExchange::invalidMap::what() const throw(){
	return ("Error: invalid input");
}

void	BitcoinExchange::compareDate(std::string date, float rate){
	float res = 0;
	if (btcmap.find(date) != btcmap.end()){
		res = btcmap[date] * rate;
	}
	else{

	}
	// std::cout << date << " => " << rate << " = " << res << std::endl;
	rate = 0;
}

void	BitcoinExchange::readValue(std::string line){
	std::string date;
	std::string strRate;
	float rate = 0;
	date = line.substr(0, 10);
	std::size_t pos = line.find("|");
	strRate = line.substr(pos + 1);
	rate = std::stof(strRate);
	compareDate(date, rate);
}

void	BitcoinExchange::checkValidInput(std::string line){
	std::size_t pos = line.find("|");
	std::size_t pos2 = line.find("-");
	std::size_t pos3 = line.find("-", pos2 + 1);
	if (pos != 11 || pos2 != 4 || pos3 != 7){
		throw(invalidMap());
		invalid = true;
	}
	int year = std::stoi(line.substr(0, 4));
	int month = std::stoi(line.substr(5, 7));
	int day = std::stoi(line.substr(8, 10));
	if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31){
		std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl;
		invalid = true;
	}
	if (invalid == false)
		std::cout << year << " : " << month << " : " << day << std::endl;
}

void	BitcoinExchange::readFile(std::string input){
	std::ifstream myfile;
	std::string line;
	myfile.open(input);
	if (myfile.is_open() == 0)
		exitError("could not open file");
	int i = 0;
	while (myfile){
		invalid = false;
		std::getline (myfile, line);
		if (i == 0 && line != "date | value")
			exitError("the file is invalid");
		if (i != 0 && !line.empty()){
			checkValidInput(line);
			if (invalid == false)
				readValue(line);
		}
		i++;
	}
}