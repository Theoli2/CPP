#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_totalAmount = _totalAmount + initial_deposit;
	_amount = initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";closed" << std::endl;
}

int Account::getNbAccounts()
{
	std::cout << "Number of Accounts :" << _nbAccounts << std::endl;
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	std::cout << "Total amount :" << _totalAmount << std::endl;
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	std::cout << "Number of deposits:" << _totalNbDeposits << std::endl;
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	std::cout << "Number of withdrawals:" << _totalNbWithdrawals << std::endl;
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{	
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit <<";deposits:" << deposit << ";amount:" << _amount << ";nb_deposits" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount = _totalAmount - withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal <<";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount( void ) const
{
	std::cout << "The amount on the account is :" << this->_amount << std::endl;
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl ;
}

void Account::_displayTimestamp(void)
{
    time_t currentTimeSec = time(NULL);
    tm* localTime = localtime(&currentTimeSec);

    std::cout << "["
              << std::setfill('0') << std::setw(4) << localTime->tm_year + 1900
              << std::setfill('0') << std::setw(2) << localTime->tm_mon + 1
              << std::setfill('0') << std::setw(2) << localTime->tm_mday
              << "_"
              << std::setfill('0') << std::setw(2) << localTime->tm_hour
              << std::setfill('0') << std::setw(2) << localTime->tm_min
              << std::setfill('0') << std::setw(2) << localTime->tm_sec
              << "] ";
}