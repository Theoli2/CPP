#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class contact {
	public:
		contact(void);
		~contact(void);
		void setfirstName(std::string input);
		void setlastName(std::string input);
		void setnickname(std::string input);
		void setphoneNumber(std::string input);
		void setdarkestSecret(std::string input);
		std::string getfirstName(void);
		std::string getlastName(void);
		std::string getnickname(void);
		std::string getphoneNumber(void);
		std::string getdarkestSecret(void);
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

class phoneBook {
	public:
		void add();
		void search();
		phoneBook(void);
		~phoneBook(void);
	private:
		int	nbr_de_contact;
		contact contacts[8];
};

#endif