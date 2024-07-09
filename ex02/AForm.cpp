/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 00:17:14 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/09 12:55:35 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string _name, int gradeRequiertToSign, int gradeRequiertToExec): name (_name), sign(false), gradeRequiertToSign(gradeRequiertToSign), gradeRequiertToExec(gradeRequiertToExec)
{
	if (gradeRequiertToExec > 150)
		throw AForm::GradeTooHighException();
	if (gradeRequiertToExec < 1)
		throw AForm::GradeTooLowException();
	if (gradeRequiertToSign > 150)
		throw AForm::GradeTooHighException();
	if (gradeRequiertToSign < 1)
		throw AForm::GradeTooLowException();
}
AForm::AForm(): name ("Unamed"), sign(false), gradeRequiertToSign(1), gradeRequiertToExec(1)
{}
AForm::~AForm()
{}

AForm	&AForm::operator=(AForm const &AForm)
{
	(std::string)name = AForm.name;
	sign = AForm.sign;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeRequiertToSign)
		throw AForm::GradeTooLowException();
	this->sign = true;
}
std::string const	AForm::getName() const
{
	return (this->name);
}

bool		AForm::isSign()
{
	return (this->sign);
}
void		AForm::setSign(bool value)
{
	this->sign = value;
}
int			AForm::getGradeRequiertToSign() const
{
	return (this->gradeRequiertToSign);
}
int			AForm::getGradeRequiertToExec() const
{
	return (this->gradeRequiertToExec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Too Hight Exception");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Too Low Exception");
}

std::ostream &operator<<(std::ostream &os, AForm &AForm) {
	os << "AForm name : " << AForm.getName() << "    AForm Requiert Grade Sign  " << AForm.getGradeRequiertToSign() << "    AForm Requiert Grade Exec  " << AForm.getGradeRequiertToSign() << "    AForm Signed  "  << (AForm.isSign() ? "Yes" : "No") << ".";
	return (os);
}