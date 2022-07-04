/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 21:32:20 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/04 14:26:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*> (raw);
}

int	main( void )
{
	Data *data = new Data(123, "simoa");
	
	uintptr_t serializedData = serialize(data);

	Data *newData = deserialize(serializedData);

	std::cout << newData->getA() << std::endl;
	std::cout << newData->getB() << std::endl;

	if (newData == data)
	{
		std::cout << "equal" << std::endl;
	}
	
	delete newData;

	return (0);
}