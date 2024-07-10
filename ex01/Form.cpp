/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 00:17:14 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 16:31:31 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, int gradeRequiertToSign, int gradeRequiertToExec): name (_name), sign(false), gradeRequiertToSign(gradeRequiertToSign), gradeRequiertToExec(gradeRequiertToExec)
{
	if (gradeRequiertToExec > 150)
		throw Form::GradeTooHighException();
	if (gradeRequiertToExec < 1)
		throw Form::GradeTooLowException();
	if (gradeRequiertToSign > 150)
		throw Form::GradeTooHighException();
	if (gradeRequiertToSign < 1)
		throw Form::GradeTooLowException();
}
Form::Form(): name ("Unamed"), sign(false), gradeRequiertToSign(1), gradeRequiertToExec(1)
{}
Form::~Form()
{}

Form	&Form::operator=(Form const &form)
{
	(std::string)name = form.name;
	sign = form.sign;
	return (*this);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeRequiertToSign)
		throw Form::GradeTooLowException();
	if (this->sign)
		throw Form::AlreadySign();
	this->sign = true;
}
std::string	Form::getName() const
{
	return (this->name);
}
bool		Form::isSign()
{
	return (this->sign);
}
void		Form::setSign(bool value)
{
	this->sign = value;
}
int			Form::getGradeRequiertToSign() const
{
	return (this->gradeRequiertToSign);
}
int			Form::getGradeRequiertToExec() const
{
	return (this->gradeRequiertToExec);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Too Hight Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Too Low Exception");
}

const char* Form::AlreadySign::what() const throw()
{
	return ("Form Already Sign");
}

std::ostream &operator<<(std::ostream &os, Form &form) {
	os << "Form name : " << form.getName() << "    Form Requiert Grade Sign  " << form.getGradeRequiertToSign() << "    Form Requiert Grade Exec  " << form.getGradeRequiertToSign() << "    Form Signed  "  << (form.isSign() ? "Yes" : "No") << ".";
	return (os);
}