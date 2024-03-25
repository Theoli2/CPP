#include "Scalar.hpp"

bool edge_cases(std::string str)
{
	if (str == "inff" || str == "inf" || str == "-inf" || str == "+inf" || str == "nan" || str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	return false;
}

bool is_alpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return true;
	return false;
}

bool is_printable(char c)
{
	if ((c > 31 && c < 127))
		return true;
	return false;
}

bool is_sign(char c)
{
	if (c == 45 || c == 43)
		return true;
	return false;
}

bool is_number(char c)
{
	if (c > 47 && c < 58)
		return true;
	return false;
}

bool is_dot(char c)
{
	if (c == 46)
		return true;
	return false;
}

bool is_decimal(std::string str, int i)
{
	if (str[i] == 0)
		return true;
	if (str[i] == 'f' && str[i + 1] == 0)
		return true;
	while (str[i] != 0)
	{
		if (str[i] == 'f' && str[i + 1] == 0)
			return true;
		if (is_number(str[i]))
			i++;
		else
			return false;
	}
	return true;
}

bool is_number_string(std::string str)
{
	int i = 0;
	if (is_sign(str[i]))
	{
		i++;
		if (is_number(str[i]))
		{
			while (str[i])
			{
				if (is_dot(str[i]) && (str[i + 1] == 0 || str[i + 1] == 'f' || is_number(str[i + 1])))
					return (is_decimal(str, i + 1));
				if (is_number(str[i]))
					i++;
				else
					return false;
			}
		}
		return true;
	}
	else
	{
		i++;
		while (str[i])
		{
			if (is_dot(str[i]) && (str[i + 1] == 0 || str[i + 1] == 'f' || is_number(str[i + 1])))
				return (is_decimal(str, i + 1));
			if (is_number(str[i]))
				i++;
			else
				return false;
		}
	}
	return true;
}

bool search_dot(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			return true;
		i++;
	}
	return false;
}

void convert_char(std::string str)
{
	char res;

	res = str[0];
	std::cout << "char: " << res << std::endl;
	std::cout << "int: " << static_cast<int>(res) << std::endl;
	std::cout << "float: " << static_cast<float>(res) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(res) << std::endl;
}

void convert_float(std::string str)
{
	float res;

	if (!edge_cases(str))
	{
		try
		{
			res = std::atof(str.c_str());
			if (static_cast<int>(res) > 31 && static_cast<int>(res) < 127)
				std::cout << "char: " << static_cast<char>(res) << std::endl;
			else if (static_cast<int>(res) <= 31 || static_cast<int>(res) == 127)
				std::cout << "char: Non-displayable character" << std::endl;
			else
				std::cout << "char: Impossible" << std::endl;
			if (std::isfinite(res) && res < static_cast	<float>(std::numeric_limits<int>::max()) && res > std::numeric_limits<int>::min())
				std::cout << "int: " << static_cast<int>(res) << std::endl;
			else
				std::cout << "int: Impossible" << std::endl;
			std::cout << "float: " << std::setprecision(15) << res  << "f"<< std::endl;
			std::cout << "double: " << std::setprecision(15) << static_cast<double>(res) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	if (str == "nanf")
	{
			std::cout << "char: Impossible" << std::endl;
			std::cout << "int: Impossible" << std::endl;
			std::cout << "float: NaNf"<< std::endl;
			std::cout << "double: NaN"<< std::endl;
	}
	if (str == "+inff" || str == "inff")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	if (str == "-inff")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf"<< std::endl;
	}
}

bool stod(std::string str , double *ptr)
{
	double res = *ptr;
	double sign = 1;
	int i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (str[i] && str[i] != '.')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	i++;
	int j = 1;
	while (str[i])
	{
		res += ((str[i] - '0') * (0.1 / j));
		i++;
		j = j * 10;
	}
	res = res * sign;
	if (!std::isfinite(res))
		return false;
	*ptr = res;
	return true;	
}

void convert_double(std::string str)
{
	double res = 0;
	double *ptr = &res;

	if (!edge_cases(str))
	{
		if (stod(str, ptr))
		{
			res = *ptr;
			if (static_cast<int>(res) > 31 && static_cast<int>(res) < 127)
				std::cout << "char: " << static_cast<char>(res) << std::endl;
			else if (static_cast<int>(res) <= 31 || static_cast<int>(res) == 127)
				std::cout << "char: Non-displayable character" << std::endl;
			else
				std::cout << "char: Impossible" << std::endl;
			if (std::isfinite(res) && res < static_cast	<float>(std::numeric_limits<int>::max()) && res > std::numeric_limits<int>::min())
				std::cout << "int: " << static_cast<int>(res) << std::endl;
			else
				std::cout << "int: Impossible" << std::endl;
			std::cout << "float: " << std::setprecision(15) << static_cast<float>(res) << "f" << std::endl;
			std::cout << "double: " << std::setprecision(15) << res << std::endl;
		}
		else
		{
			std::cout << "double overflow\n";
		}
	}
	if (str == "nan")
	{
			std::cout << "char: Impossible" << std::endl;
			std::cout << "int: Impossible" << std::endl;
			std::cout << "float: NaNf"<< std::endl;
			std::cout << "double: NaN"<< std::endl;
	}
	if (str == "+inf" || str == "inf")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	if (str == "-inf")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void convert_int(std::string str)
{
	int res;
	std::string str2;
	std::ostringstream convert;

	res = atoi(str.c_str());
	convert << res;
	str2 = convert.str();
	if (str2 == str)
	{
		if (static_cast<int>(res) > 31 && static_cast<int>(res) < 127)
			std::cout << "char: " << static_cast<char>(res) << std::endl;
		else if (static_cast<int>(res) <= 31 || static_cast<int>(res) == 127)
			std::cout << "char: Non-displayable character" << std::endl;
		else
			std::cout << "char: Impossible" << std::endl;		
		std::cout << "int: " << res << std::endl;
		std::cout << "float: " << std::setprecision(15) << static_cast<float>(res) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(15) << static_cast<double>(res) << std::endl;
	}
	else
		std::cout << "Integer overflow\n";
}

void ScalarConverter::convert(std::string str)
{
	if ((str[1] == 0 && is_printable(str[0])) || (str[1] != 0 && (edge_cases(str) || is_number_string(str))))
	{
		if (str[1] == 0 && !is_number(str[0]))
		{
			convert_char(str);
		}
		else if (str == "inff" || str == "-inff" || str == "+inff" || str == "nanf" || (str[str.size() - 1] == 'f' && is_number_string(str)))
		{
			convert_float(str);
		}
		else if (str == "inf" || str == "-inf" || str == "+inf" || str == "nan" || (is_number_string(str) && search_dot(str)))
		{
			convert_double(str);
		}
		else if (is_number_string(str))
		{
			convert_int(str);
		}
	}
	else
	{
		std::cout << "Error: convert: The string you provided can't be converted: only single characters or float, double or int can be converted" << std::endl;
	}
}