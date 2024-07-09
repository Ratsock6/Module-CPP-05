/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 00:00:47 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/04 17:34:53 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeRequiertToSign;
		const int			gradeRequiertToExec;
	public:
		Form(std::string _name, int gradeRequiertToSign, int gradeRequiertToExec);
		Form();
		~Form();

		Form		&operator=(Form const &form);
		void		beSigned(const Bureaucrat &bureaucrat);
		std::string	getName() const;
		bool		isSign();
		void		setSign(bool value);
		int			getGradeRequiertToSign() const;
		int			getGradeRequiertToExec() const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form &form);
