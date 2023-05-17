#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
	_nbAccounts++;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed\n";
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}
bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal)
		std::cout << "refused" << "\n";
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	}
	return 0;
	}
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"; 
	std::cout << _amount << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << "\n";
}
int		Account::checkAmount( void ) const {
	return (_amount);
	}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
	}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
	}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
	}
int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp () {
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	std::cout << "[" << (now->tm_year + 1900);
	if ((now->tm_mon + 1) < 10)
		std::cout << '0';
	std::cout << (now->tm_mon + 1);
	if ((now->tm_mday + 1) < 10)
		std::cout << '0';
	std::cout << now->tm_mday << "_";
	if ((now->tm_hour + 1) < 10)
		std::cout << '0';
	std::cout << now->tm_hour;
	if ((now->tm_min + 1) < 10)
		std::cout << '0';
	std::cout << now->tm_min;
	if ((now->tm_sec + 1) < 10)
		std::cout << '0';
	std::cout << now->tm_sec << "] ";
}