/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:31 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/07 16:56:21 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP


# define SPAN_HPP
# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
    private:
        unsigned int _capacity;
        std::vector<int> _vector;
        Span( void );
    public:

        Span( unsigned int capacity);
        virtual ~Span( void );
        Span( Span const & src);
        Span & operator=( Span const & rhs);
        int & operator[]( int index );

        void			addNumber(int number);
    	int				shortestSpan( void );
        int				longestSpan( void );

        void			addRange( int *arr, int len );
        void			addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int	getCapacity( void );
        unsigned int	size( void );

};



#endif