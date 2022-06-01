#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.hpp"
#include <sys/time.h>
#include <stdio.h>


/*---------------Definitions des variables statiques--------------*/

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*--------------------------Constructor---------------------------*/

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

/*--------------------------Destructor----------------------------*/

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex;
	std::cout << ";amount:" << _amount;
	if (_accountIndex < 7)
		std::cout << ";closed" << std::endl;
	else
		std::cout << ";closed";
}

/*--------------------------Getters-------------------------------*/

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

/*--------------------------TIME-------------------------------------------*/

void	Account::_displayTimestamp(void)
{
	// std::cout << "[19920104_091532] ";
	time_t	timestamp;
	char	buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "] ";
}

/*--------------------------FUNCTIONS--------------------------------------*/

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount > withdrawal)
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		std::cout << ";amount:" << _amount;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
	}
	else
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
	}
	return (true);
}
