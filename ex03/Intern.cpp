/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:41:27 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 16:15:52 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{}
Intern::Intern(Intern const &other)
{
	(void) other;
}
Intern::~Intern(void)
{}
AForm	*Intern::makeForm(std::string const &name, std::string const &target)
{
	int			values;
	std::string	tab[3] = { "presidential pardon", "shrubbery creation", "robotomy request" };

	values = 5;
	for (size_t i = 0; i < 3; i++)
	{
		if (tab[i] == name)
			values = i;
	}
	switch (values)
	{
	case 0:
		return (new PresidentialPardonForm(target));
	case 1:
		return (new ShrubberyCreationForm(target));
	case 2:
		return (new RobotomyRequestForm(target));
	default:
		std::cerr << "Error ! Form not found" << std::endl;
		break;
	}
	return (NULL);
}
Intern	&Intern::operator=(Intern const &other)
{
	(void) other;
	return (*this);
}