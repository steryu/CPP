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
}

BitcoinExchange::BitcoinExchange(){
	invalid = false;
	saveData();
	std::cout << "The database has been saved" << std::endl;
}

BitcoinExchange::~BitcoinExchange(){
	std::cout << "\nBitcoinExchange destroyed" << std::endl;
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
	std::map<std::string, float>::iterator itlow;
	if (btcmap.find(date) != btcmap.end()){
		res = btcmap[date] * rate;
	}
	else{
		itlow = btcmap.lower_bound(date);
		itlow--;
		res = itlow->second * rate;
	}
	std::cout << date << " => " << rate << " = " << res << std::endl;
	rate = 0;
}

void	BitcoinExchange::readValue(std::string line){
	std::string date;
	std::string strRate;
	float rate = 0;
	date = line.substr(0, 10);
	strRate = line.substr(13);
	rate = std::stof(strRate);
	compareDate(date, rate);
}

int	BitcoinExchange::checkDate(int year, int month, int day){
	if (year < 2009 || year > 2022 || month < 1 || month > 12){
		return (1);
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
		return (1);
	else if (day < 1 || day > 31)
		return (1);
	if (year % 4 == 0){
		if (month == 2 && (day < 1 || day > 29))
			return (1);
		else if (month == 2 && (day < 1 || day > 28))
			return (1);
	}
	return (0);
}

void	BitcoinExchange::checkValidInput(std::string line){
	int year = 0;
	int month = 0;
	int day = 0;
	std::size_t pos = line.find("|");
	std::size_t pos2 = line.find("-");
	std::size_t pos3 = line.find("-", pos2 + 1);
	try {
		if (pos != 11 || pos2 != 4 || pos3 != 7 || line.length() < 13)
			throw(invalidMap());
		}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
		invalid = true;
		return ;
	}
	try{
		year = std::stoi(line.substr(0, 4));
		month = std::stoi(line.substr(5, 7));
		day = std::stoi(line.substr(8, 10));
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl;
		invalid = true;
		return ;
	}
	if (checkDate(year, month, day)){
		std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl;
		invalid = true;
		return ;
	}
	float value = 0;
	try{value = std::stof(line.substr(13));}
	catch(std::exception & e){
		std::cout << "Error: no value" << std::endl;
		invalid = true;
		return ;
	}
	if (value < 0){
		std::cout << "Error: value is not a postive number" << std::endl;
		invalid = true;
	}
	if (value > 1000){
		std::cout << "Error: value too large" << std::endl;
		invalid = true;
	}
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
