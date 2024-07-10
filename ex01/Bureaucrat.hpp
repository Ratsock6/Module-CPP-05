/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:24:58 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 03:47:29 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(std::string _name, int grade);
	Bureaucrat();
	~Bureaucrat();

	Bureaucrat		&operator=(Bureaucrat const &bureaucrat);
	std::string		getName(void);
	int				getGrade(void) const;
	void			upRank(void);
	void			unRank(void);
	void			upRank(int add);
	void			unRank(int remove);
	void			signForm(const Form &form);

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


std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat);