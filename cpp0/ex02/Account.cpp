/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:48:21 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/10 09:32:13 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	std::cout << '[';
	std::cout << (now->tm_year + 1900);
	std::cout <<  std::setfill('0') << std::setw(2) << (now->tm_mon + 1);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mday);
	std::cout << '_';
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_hour);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_min);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_sec);
	std::cout << "] ";
}

int	Account::getNbAccounts( void ) 
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return Account::_totalNbWithdrawals;
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

Account::Account( void ) {}

//[19920104_091532] index:0;amount:47;closed
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl; 
}


//[19920104_091532] index:0;amount:42;created
Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created";
	std::cout << std::endl;
}

//[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
void	Account::makeDeposit( int deposit )
{

	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

//[19920104_091532] index:5;p_amount:23;withdrawal:refused
//[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (checkAmount() < withdrawal) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_amount-= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return true;
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

// /[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}
