/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 04:49:35 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 04:54:02 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm):
	AForm(robotomyRequestForm), target(robotomyRequestForm.target) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("RobotomyRequestForm", 145, 137), target("Unamed") {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	*static_cast<AForm *>(this) = src;
	this->target = src.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{};

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
    int random;
    
    AForm::execute(bureaucrat);
	std::cout << "*drilling noise*" << std::endl;
    srand (time(NULL));
    random = rand() % 2 + 1;
    if (random == 1)
        std::cout << this->target << " has been robotomized" << std::endl;
    else
        std::cout <<  "The operation failed" << std::endl;
}
