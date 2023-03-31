#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__
#include <iostream>
#include <fstream>
#include <iterator>
#include <map>

class BitcoinExchange{
protected:
private:
	bool invalid;
	std::map<std::string, float> btcmap;
public:
	BitcoinExchange();
	virtual ~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange& operator=(const BitcoinExchange &other);
	void	saveData();
	void	readFile(std::string input);
	void	readValue(std::string line);
	void	compareDate(std::string date, float rate);
	void	checkValidInput(std::string line);
	class	invalidMap : public std::exception{
		const char* what() const throw();
	};
};

int	exitError(std::string str);

#endif
