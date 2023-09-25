#include "phoneBook.hpp"

void phoneBook::add()
{
	int i;

	contact new_contact;
	std::cout << "first name:" << std::endl;
	std::cin >> new_contact.firstName;
	std::cout << "last name:" << std::endl;
	std::cin >> new_contact.lastName;
	std::cout << "nickname:" << std::endl;
	std::cin >> new_contact.nickname;
	std::cout << "phone number:" << std::endl;
	std::cin >> new_contact.phoneNumber;
	std::cout << "darkest secret:" << std::endl;
	std::cin >> new_contact.darkestSecret;
	i = 0;
	while (i <= 7)
	{
		if (this->contacts[i].firstName.empty())
		{
			this->nbr_de_contact += 1;
			this->contacts[i] = new_contact;
			break ;
		}
		i++;
	}
	if (i == 7 && this->contacts[i].firstName.empty())
	{
		i = 0;
		while (i < 7)
		{
			this->contacts[i] = this->contacts[i + 1];
			i++;
		}
		this->contacts[i] = new_contact;
	}
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

contact::contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

contact::~contact(void)
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
	for (int i = -1; i < this->nbr_de_contact, i++;)
	{
		std::cout << std::setw(10) << std::right << i  + 1 << "|" << "";
		std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].firstName) << "|" << "";
    	std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].lastName) << "|" <<  "";
    	std::cout << std::setw(10) << std::right << suitForDisplayString(this->contacts[i].nickname) << std::endl;
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
	}
	std::cout << "first name:" << this->contacts[j].firstName <<std::endl;
	std::cout << "last name:" << this->contacts[j].lastName <<std::endl;
	std::cout << "nickname:" << this->contacts[j].nickname <<std::endl;
	std::cout << "phone number:" << this->contacts[j].phoneNumber <<std::endl;
	std::cout << "darkest secret:" << this->contacts[j].darkestSecret <<std::endl;
}

int main() 
{
	std::string buffer;
	phoneBook myPhoneBook;

	while (buffer != "EXIT")
	{
		std::cout << "entrez une commande : ADD: SEARCH: EXIT: ";
		std::cin >> buffer;
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
	}
	std::cout << "EXIT" << std::endl;
	return (0);
}
