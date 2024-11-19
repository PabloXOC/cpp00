#include "Account.hpp"
#include <iostream>
#include <iomanip> // If needed for formatting output
#include <ctime>   // If timestamps are involved

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
	std::tm *local_time = std::localtime(&now);
	std::cout	<< "[" << (local_time->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << (local_time->tm_mon + 1)
				<< std::setw(2) << std::setfill('0') << (local_time->tm_mday + 1)
				<< "_"
				<< std::setw(2) << std::setfill('0') << (local_time->tm_hour + 1)
				<< std::setw(2) << std::setfill('0') << (local_time->tm_min + 1)
				<< std::setw(2) << std::setfill('0') << (local_time->tm_sec + 1)
				<< "] ";
}

Account::Account(int initial_deposit) : 
	_accountIndex(_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0){
	_nbAccounts++;
	_totalAmount += initial_deposit;
    _displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amout:"
				<< initial_deposit << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:"
				<< _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount() {
	return (_totalAmount);
}

void	Account::makeDeposit(int deposit) {
	int	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:"
				<< p_amount << ";deposit:" << deposit << ";amount:"
				<< _amount << ";nb_deposits:" << _amount << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	int	p_amount = _amount;
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout	<< "index:" << _accountIndex << ";p_amount:"
					<< p_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout	<< "index:" << _accountIndex << ";p_amount:"
				<< p_amount << ";withdrawal:" << withdrawal
				<< ";amount:" << _amount << ";nb_deposits:" 
				<< _amount << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";deposits:"
				<< _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< "accounts:"
				<< _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << std::endl;
}

