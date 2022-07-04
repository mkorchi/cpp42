/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:36:57 by mkorchi           #+#    #+#             */
/*   Updated: 2022/07/04 16:06:13 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP


# define BASE_HPP

// base class should be polymorphic; should have a vritual method, so the dynamic cast can be successful

class Base
{

	public:
		Base( void );
		virtual ~Base( void );
};

#endif