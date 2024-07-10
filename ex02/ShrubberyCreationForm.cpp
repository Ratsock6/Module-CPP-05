/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:42:37 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 03:59:12 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm):
	AForm(shrubberyCreationForm), target(shrubberyCreationForm.target) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137), target("Unamed") {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	*static_cast<AForm *>(this) = src;
	this->target = src.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{};

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	std::string		file_name(this->target + "_shrubbery");
	std::ofstream	file;

	
	AForm::execute(bureaucrat);
	file.open(file_name.c_str());
	if (file.fail())
		return ;
	else
		file << ASCII_TREE;
}
