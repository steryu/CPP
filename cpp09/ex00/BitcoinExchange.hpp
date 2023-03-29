#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__
#include <iostream>

class BitcoinExchange{
protected:
private:
public:
	BitcoinExchange();
	virtual ~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange& operator=(const BitcoinExchange &other);
};

#endif
