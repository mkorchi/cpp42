/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:55:58 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/17 14:16:29 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: AForm("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("ShrubberyCreation", 145, 137)
{
	this->_target = "default";
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->preExecute(executor))
	{
		std::cout << this->_target + "_shrubbery has been created." << std::endl;
		std::ofstream ofs(this->_target + "_shrubbery");
		if (ofs.fail())
		{
			std::cout << strerror(errno) << std::endl;
			return ;
		}
		ofs << "      /\\      " << std::endl;
		ofs << "     /\\*\\     " << std::endl;
		ofs << "    /\\O\\*\\    " << std::endl;
		ofs << "   /*/\\/\\/\\   " << std::endl;
		ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
		ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
		ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
		ofs << "      ||      " << std::endl;
		ofs << "      ||      " << std::endl;
		ofs << "      ||      " << std::endl;
		ofs.close();
	}
}

