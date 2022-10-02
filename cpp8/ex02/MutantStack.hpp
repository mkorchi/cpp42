/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:13:36 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/07 16:46:22 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP


# define MUTANTSTACK_HPP
# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>
# include <list>
# include <vector>

template < typename T>
class MutantStack : public std::stack<T>
{

	public:
		MutantStack( void )
		{

		}
		
		virtual ~MutantStack( void )
		{

		}
		
		MutantStack( MutantStack const & src)
		{
			*this = src;
		}
		
		MutantStack & operator=( MutantStack const & rhs )
		{
			if (this != &rhs)
				this->c = rhs->c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin( void )
		{
			return this->c.begin();
		}

		iterator end( void )
		{
			return this->c.end();
		}

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	
		reverse_iterator rbegin( void )
		{
			return this->c.rbegin();
		}

		reverse_iterator rend( void )
		{
			return this->c.rend();
		}
};




#endif