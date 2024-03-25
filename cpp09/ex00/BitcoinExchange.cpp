#include "BitcoinExchange.hpp"

bool isValidDate(const std::string& date)
{
    struct tm tm;
    char buf[10];

    if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL)
        return false;

    strftime(buf, sizeof(buf), "%Y-%m-%d", &tm);
    if (tm.tm_mon < 0 || tm.tm_mon > 11)
	{
        return false;
	}
    if (tm.tm_mday < 1 || tm.tm_mday > 31)
	{
        return false;
	}
    // Check for February (leap year)
	if (tm.tm_mon == 1) 
	{
		int year = 1900 + tm.tm_year;
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if (tm.tm_mday > (isLeapYear ? 29 : 28))
			return false;
	}

    // Check for months with 30 days
    if ((tm.tm_mon == 3 || tm.tm_mon == 5 || tm.tm_mon == 8 || tm.tm_mon == 10) && tm.tm_mday > 30)
    {
	    return false;
	}
	// std::cout << "aaaah\n";
    return true;
}

void isValidPrice(const double& n)
{
	if (n < 0)
		throw std::invalid_argument()
}

void Bitcoin::parse(const std::string input,const char sep, std::map<std::string, double>& map)
{
	std::ifstream file(input.c_str());
	std::string line;

	if (!file.is_open())
		throw std::runtime_error("Error: couldn't open " + input + ".");
	int	i = 0;
	std::getline(file, line);
	while(std::getline(file, line)) 
	{
		++i;
		std::string::size_type pos = line.find(sep);
		if (pos == std::string::npos)
		{
			map.insert(std::make_pair(line, -1));
		}
		else
		{
			std::istringstream iss(line.substr(pos + 1, line.length()));
			double value;
			iss >> value;
			map.insert(std::make_pair(line.substr(0, pos), value));
		}
	}
	struct tm tm;
	for(std::map<std::string, double>::iterator it = map.begin(); it != map.end(); ++it) 
	{
    	if (strptime(it->first.c_str(), "%Y-%m-%d", &tm) == NULL)
			throw std::runtime_error("Error: " + it->first + " is not a valid date (the format should be YYYY-MM-DD).");
	}
	// if (input != "data.csv")
	// {
	// 	for(std::map<std::string, double>::iterator it = map.begin(); it != map.end(); ++it) 
	// 	{
	// 		if (isValidPrice(it->second) == false)
	// 		{
	// 			std::stringstream ss;
	// 			ss << it->second;
	// 			std::string second_str = ss.str();
	// 			throw std::runtime_error("Error: " + second_str + " is not a valid price (the price should be between 0 and 1000).");
	// 		}
	// 	}
	// }
}

Bitcoin::Bitcoin()
{
	parse("data.csv", ',', this->_data);
}


Bitcoin::Bitcoin(const Bitcoin &other) :_data(other._data)
{}

Bitcoin& Bitcoin::operator=(const Bitcoin &other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}

Bitcoin::~Bitcoin()
{}

double Bitcoin::findRate(std::string date)
{
    if (date < _data.begin()->first) {
        throw std::invalid_argument("Date is earlier than the earliest date in the map");
    }

	std::map<std::string, double>::iterator it = _data.lower_bound(date);
    if (it != _data.end()) {
        std::string closestDate = it->first;
        double closestRate = it->second;
		return closestRate;
	}
	std::string closestDate = _data.rbegin()->first;
	double closestRate = _data.rbegin()->second;
	return closestRate;
}

void Bitcoin::printRes()
{
	double res;
	for (std::map<std::string, double>::iterator it = .begin(); it != _input.end(); ++it)
	{
		try
		{
			if (isValidDate(it->first) == false)
				throw std::invalid_argument("Date is not valid");
			isValidPrice(it->second);
			res = findRate(it->first) * it->second;
			std::cout << it->first << " => " << it->second << " = " << res << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}