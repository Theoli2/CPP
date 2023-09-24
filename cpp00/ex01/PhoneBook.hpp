#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class contact {
	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	private:
};

class phoneBook {
	public:
		void add();
		void search();
		void init();
	private:
		int	nbr_de_contact;
		contact contacts[8];
};
