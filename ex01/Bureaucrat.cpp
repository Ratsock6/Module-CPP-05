/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:24:05 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/01 17:20:02 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int grade): name(_name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat() : name("Unamed"), grade(150)
{}
Bureaucrat::~Bureaucrat()
{}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	grade = bureaucrat.grade;
	(std::string)name = bureaucrat.name;
	return (*this);
}
std::string	Bureaucrat::getName(void)
{
	return (name);
}
int	Bureaucrat::getGrade(void)
{
	return (grade);
}
void	Bureaucrat::upRank(void)
{
	upRank(1);
}
void	Bureaucrat::unRank(void)
{
	unRank(1);
}
void	Bureaucrat::upRank(int add)
{
	grade -= add;
	if (grade >= 1)
		return ;
	grade = 1;
	throw Bureaucrat::GradeTooHighException();
}
void	Bureaucrat::unRank(int remove)
{
	grade += remove;
	if (grade <= 150)
		return ;
	grade = 150;
	throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Max atteint");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Min atteint");
}