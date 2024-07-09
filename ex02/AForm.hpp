/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeRequiertToSign;
		const int			gradeRequiertToExec;
	public:
		AForm();
		virtual ~AForm();

		AForm				&operator=(AForm const &AForm);
		void				beSigned(const Bureaucrat &bureaucrat);
		std::string	const	getName() const;
		bool				isSign();
		void				setSign(bool value);
		int					getGradeRequiertToSign() const;
		int					getGradeRequiertToExec() const;
		virtual void		execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, AForm &AForm);
