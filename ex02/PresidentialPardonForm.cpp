/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:49:23 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 14:52:33 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm):
	AForm(presidentialPardonForm), target(presidentialPardonForm.target) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardonForm", 25, 5), target("Unamed") {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	*static_cast<AForm *>(this) = src;
	this->target = src.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{};

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{

	AForm::execute(bureaucrat);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}