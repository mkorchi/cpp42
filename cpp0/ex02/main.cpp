/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:44:28 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/01 14:00:42 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Example.hpp"
#include <ctime>
#include <iomanip>

int main() {
	// typedef std::vector<Example>		accounts_t;

	// int	const		amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	// size_t const	amounts_size( sizeof(amounts) / sizeof(int) );
	
	// accounts_t				accounts( amounts, amounts + amounts_size );
	// accounts_t::iterator	acc_begin	= accounts.begin();
	// accounts_t::iterator	acc_end		= accounts.end();

	// Example exmaple = *(acc_begin + 1);
	
	// std::cout << exmaple.nbr;

	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	std::cout << (now->tm_year + 1900) << std::endl;
	std::cout <<  std::setfill('0') << std::setw(2) << (now->tm_mon + 1) << std::endl;
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mday) << std::endl;
	std::cout << '_';
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_hour) << std::endl;
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_min) << std::endl;
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_sec) << std::endl;


	return (0);
}