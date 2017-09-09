/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:02:30 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/04 22:00:57 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "resources/Account.class.hpp"
#include <iostream>
#include <fstream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void				print_time( void ){
	time_t			now;
	struct tm		*ltm;
	char			buffer[255];
	
	time(&now);
	ltm = localtime(&now);
	strftime(buffer,80, "[%Y%m%d_%H%M%S] ", ltm);
	std::cout << buffer;
}

Account::Account( int initial_deposit ): _amount(initial_deposit),\
										 _accountIndex(_nbAccounts)
{
	print_time();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << initial_deposit << ";"
			<< "created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account( void ) {
	print_time();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= this->_amount;
}

void		Account::makeDeposit( int deposit ){
	int p_amount;

	print_time();
	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << p_amount << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal ){
	int		tmp_amount;

	print_time();
	tmp_amount = this->_amount - withdrawal;
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";";
	if (tmp_amount < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	};
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int			Account::checkAmount( void ) const{
	print_time();
	std::cout << "checkAmount" << std::endl;
	return (this->_amount);
}

void		Account::displayStatus( void ) const{
	print_time();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:"<< this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int			Account::getNbAccounts( void ){
	print_time();
	std::cout << "getNbAccounts" << std::endl;
	return (_nbAccounts);
}

int			Account::getTotalAmount( void ){
	print_time();
	std::cout << "getTotalAmount" << std::endl;
	return (_totalAmount);
}

int			Account::getNbDeposits( void ){
	print_time();
	std::cout << "getNbDeposits" << std::endl;
	return (_totalNbDeposits);
}

int			Account::getNbWithdrawals( void ){
	print_time();
	std::cout << "getNbWithdrawals" << std::endl;
	return (_totalNbWithdrawals);
}

void 		Account::displayAccountsInfos( void ){
	print_time();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:"<< _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}
