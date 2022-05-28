/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:49:06 by mkorchi           #+#    #+#             */
/*   Updated: 2022/05/28 18:19:05 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char *s) {
	size_t	i;

	i = 0;
	while (i < strlen(s))
	{
		s[i] = toupper(s[i]);
		i++;
	}
}

int	main(int argc, char **argv) {
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 1;
	while (i < argc)
	{
		to_upper(argv[i]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}