/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:00:09 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/05 13:37:00 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void printCopy(Array<int> numbers)
{
    Array<int> copy(numbers);
    //Array<int> copy;
    //copy = numbers;
    
    unsigned int i = 0;
    while (i < copy.size())
    {
        std::cout << copy[i] << ", ";
        i++;
    }
    std::cout << std::endl;
}

int main(int, char**)
{
    std::cout << "**************** TEST 1 ****************" << std::endl;
    // TEST 1
    {
        Array<int> numbers(10);
        std::cout << "size of my array is " << numbers.size() << std::endl;
        unsigned int i = 0;
        srand(time(NULL));
        while (i < numbers.size())
        {
            std::cout << numbers[i] << ", ";
            numbers[i] = rand() % 10;
            i++;
        }
        std::cout << std::endl;
        i = 0;
        while (i < numbers.size())
        {
            std::cout << numbers[i] << ", ";
            i++;
        }
        std::cout << std::endl;
        try
        {
            std::cout << numbers[-2];
        }
        
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        
        try
        {
            std::cout << numbers[numbers.size()];
        }
        catch (std::out_of_range &e)
        {
            std::cerr << e.what() << std::endl;
        }
        printCopy(numbers);
    }

    std::cout << "**************** TEST 2 ****************" << std::endl;
    //TEST 2
    {
        Array<std::string> strings(5);
        unsigned int i = 0;
        while (i < strings.size())
        {
            strings[i] = "hello " + std::to_string(i);
            i++;
        }
        i = 0;
        while (i < strings.size())
        {
            std::cout << "'" << strings[i] << "', ";
            i++;
        }
        std::cout << std::endl;
    }

    //TEST 3
    std::cout << "**************** TEST 3 ****************" << std::endl;
    {
        Array<float> floats(8);
        unsigned int i = 0;
        while (i < floats.size())
        {
            std::cout << floats[i] << ", ";
            float randomFloat = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 5));
            floats[i] = randomFloat;
            i++;
        }
        std::cout << std::endl;
        i = 0;
        while (i < floats.size())
        {
            std::cout << floats[i] << ", ";
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}
