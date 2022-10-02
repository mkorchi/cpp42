/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:05:23 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/06 11:08:19 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
    std::vector<int> v1;

    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(9);

    try
    {
        easyfind(v1, 9);
        //easyfind< std::vector<int> >(v1, 9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    return 0;
}