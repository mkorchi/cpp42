/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:43:29 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/27 14:34:32 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
	Base *base;
	std::srand(std::time(nullptr));
	int	i = std::rand() % 3;
	switch(i)
	{
		case 0:
			base = new A();
			std::cout << "Object A was created with the type Base" << std::endl;
			break;
		case 1:
			base = new B();
			std::cout << "Object B was created with the type Base" << std::endl;
			break;
		case 2:
			base = new C();
			std::cout << "Object C was created with the type Base" << std::endl;
			break;
		default:
			std::cout << "Object A was created with the type Base" << std::endl;
			base = new A();
	}
	return base;
}

void identify(Base* p)
{
	std::cout << "identifying our base using pointer" << std::endl;
	A *a = dynamic_cast<A*>(p);
	if (a != nullptr)
	{
		std::cout << "base is actually A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != nullptr)
	{
		std::cout << "base is actually B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "base is actually C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	std::cout << "identifying our base using reference" << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "base is actually A" << std::endl;
		return ;
	}
	catch (std::bad_cast) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "base is actually B" << std::endl;
		return ;
	}
	catch (std::bad_cast) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "base is actually C" << std::endl;
		return ;
	}
	catch (std::bad_cast) {}
}

int	main( void )
{
	Base *base;

	base = generate();

	identify(base);
	identify(*base);

	delete base;
	return 0;
}