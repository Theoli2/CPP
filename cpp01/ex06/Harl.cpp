#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void){
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money." << std::endl << "You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void){
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void){
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i;

	for (i = 0; i < 4; i++){
		if (levels[i] == level){
			break;
		}
	}
	switch (i){
		case 0:
			(this->*funcPtr[0]) ();
			break ;
		case 1:
			(this->*funcPtr[1]) ();
			break ;
		case 2:
			(this->*funcPtr[2]) ();
			break ;
		case 3:
			(this->*funcPtr[3]) ();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}