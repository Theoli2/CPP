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
		phoneBook(void);
		~phoneBook(void);
	private:
		int	nbr_de_contact;
		contact contacts[8];
};

#endif