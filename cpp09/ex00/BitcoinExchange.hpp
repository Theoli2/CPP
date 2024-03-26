#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include <map>

class Bitcoin
{
	public:
		Bitcoin();
		Bitcoin(const Bitcoin &other);
		Bitcoin &operator=(const Bitcoin &other);
		~Bitcoin();
		void parse(const std::string input,const char sep, std::map<std::string, double>& map);
		void printRes(std::string input);
		double findRate(std::string date);
	private:
		std::map<std::string, double> _data;
};

#endif