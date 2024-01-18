#include "phoneBook.hpp"

void phoneBook::add()
{
	int i;
	static int last_index;
	std::string input;

	contact new_contact;
	std::cout << "first name:" << std::endl;
	std::getline(std::cin, input); 
	if (!std::cin)
		exit(0);
	new_contact.setfirstName(input);
	std::cin.clear();
	if (new_contact.getfirstName().empty())
	{
		std::cout << "field can't be empty" << std::endl, NULL;
		return ;
	}
	std::cout << "last name:" << std::endl;
	std::getline(std::cin, input); 
	if (!std::cin)
		exit(0);
	new_contact.setlastName(input);
	std::cin.clear();
	if (new_contact.getlastName().empty())
	{
		std::cout << "field can't be empty" << std::endl, NULL;
		return ;
	}
	std::cout << "nickname:" << std::endl;
	std::getline(std::cin, input); 
	if (!std::cin)
		exit(0);
	new_contact.setnickname(input);
	if (new_contact.getnickname().empty())
	{
		std::cout << "field can't be empty" << std::endl, NULL;
		return ;
	}
	std::cout << "phone number:" << std::endl;
	std::getline(std::cin, input); 
	if (!std::cin)
		exit(0);
	new_contact.setphoneNumber(input);
	if (new_contact.getphoneNumber().empty())
	{
		std::cout << "field can't be empty" << std::endl, NULL;
		return ;
	}
	std::cout << "darkest secret:" << std::endl;
	std::getline(std::cin, input); 
	if (!std::cin)
		exit(0);
	new_contact.setdarkestSecret(input);
	if (new_contact.getdarkestSecret().empty())
	{
		std::cout << "field can't be empty" << std::endl, NULL;
		return ;
	}
	this->contacts[last_index] = new_contact;
	if (nbr_de_contact  < 8)
		nbr_de_contact++;
	last_index++;
	if (last_index > 7)
		last_index = 0;
}

phoneBook::phoneBook() : nbr_de_contact(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

phoneBook::~phoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string suitForDisplayString(std::string src)
{
	std::string dst;

	if (src.length() >= 10)
	{
		dst = src.substr(0, 9);
		dst += ".";
	}
	else 
		dst = src;
	return (dst);
}

void phoneBook::search()
{
	std::string	input;
	int j;

	if (this->nbr_de_contact == 0)
	{
		std::cout << "Pas de contacts dans l'annuaire" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	for (int i = 0; i < this->nbr_de_contact; i++)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|" << "";
		std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].getfirstName()) << "|" << "";
    	std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].getlastName()) << "|" <<  "";
    	std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].getnickname()) << std::endl;
	}
	j = -1;
	while (j < 0 || j >= this->nbr_de_contact)
	{
		std::cout << "Type a contact's index: between 1 and " << this->nbr_de_contact << std::endl;
		std::cin >> input;
		try
		{
			j = std::stoi(input) - 1;
			if (j >= 0 && j < this->nbr_de_contact)
				break;
		} catch (const std::invalid_argument& e) {
			std::cout << "(o_O) comment ca mon reuf ?" << std::endl;
		}
		if (!std::cin)
			exit(0);
	}
	std::cout << "first name:" << this->contacts[j].getfirstName() <<std::endl;
	std::cout << "last name:" << this->contacts[j].getlastName() <<std::endl;
	std::cout << "nickname:" << this->contacts[j].getnickname() <<std::endl;
	std::cout << "phone number:" << this->contacts[j].getphoneNumber() <<std::endl;
	std::cout << "darkest secret:" << this->contacts[j].getdarkestSecret() <<std::endl;
}

int main() 
{
	std::string buffer;
	phoneBook myPhoneBook;
	int i = 1;

	std::cout << "entrez une commande : ADD: SEARCH: EXIT: ";
	while (std::getline(std::cin, buffer))
	{
		if (!std::cin)
			break;
		if (i == 0)
			std::cout << "entrez une commande : ADD: SEARCH: EXIT: ";
		if (buffer == "ADD")
		{
			std::cout << "ADD" << std::endl;
			myPhoneBook.add();
		}
		else if (buffer == "SEARCH") 
		{
			std::cout << "SEARCH" << std::endl;
			myPhoneBook.search();
		}
		if (buffer == "EXIT")
			break;
		i = 0;
	}
	std::cout << "EXIT" << std::endl;
	return (0);
}
