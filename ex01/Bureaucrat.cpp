/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:24:05 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 18:19:17 by aallou-v         ###   ########.fr       */
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
int	Bureaucrat::getGrade(void) const
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
void	Bureaucrat::upRank(unsigned int add)
{
	grade -= add;
	if (grade >= 1)
		return ;
	grade = 1;
	throw Bureaucrat::GradeTooHighException();
}
void	Bureaucrat::unRank(unsigned int remove)
{
	grade += remove;
	if (grade <= 150)
		return ;
	grade = 150;
	throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::signForm(const Form &form)
{
	if (getGrade() <= form.getGradeRequiertToSign())
		std::cout << this->name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn’t sign " << form.getName() << " because " << " Grade Problem" << std::endl;
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
