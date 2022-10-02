/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:03:09 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/06 10:47:24 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP


# define EASYFIND_HPP
# include <algorithm>
# include <vector>
# include <array>
# include <iostream>

// find 
// returns an iterator to the first element in the range that == val
// if not found returns last == list.end()


template < typename T >  
void    easyfind(T param, int valToFind)
{
    typename T::iterator iter = std::find(param.begin(), param.end(), valToFind);
    if (iter != param.end())
        std::cout << "element was found at index: " << iter - param.begin() << std::endl;
    else
        throw std::exception();
    
}


#endif