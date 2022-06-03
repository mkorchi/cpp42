/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:54:10 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/03 09:32:03 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return 1;
	}
	std::string infile(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	
	std::ifstream	ifs(infile);
	if (ifs.fail()) {
		std::cout << strerror(errno) << std::endl;
		return (1);
	}
	std::ofstream ofs(infile + ".replace");
	if (ofs.fail()) {
		ifs.close();
		std::cout << strerror(errno) << std::endl;
		return (1);
	}
	std::string temp;
	std::string finalString;
	while (std::getline(ifs, temp)) {
		std::size_t found;
		
		found = temp.find(s1);
		if (found == std::string::npos)
			finalString = temp;
		while (found != std::string::npos) {
			finalString = temp.substr(0, found);
			finalString += s2;
			finalString += temp.substr(found + s1.length());
			temp = finalString;
			found = temp.find(s1);
		}
		ofs << finalString;
		if (!ifs.eof())
			ofs << std::endl;
		finalString = "";
	}
	ofs.close();
	ifs.close();
}