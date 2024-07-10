/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:25:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 16:12:05 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern		intern;
	Bureaucrat	john("John", 1);
	AForm		*sc(intern.makeForm("shrubbery creation", "sc"));
	AForm		*rr(intern.makeForm("robotomy request", "rr"));
	AForm		*pp(intern.makeForm("presidential pardon", "pp"));

	intern.makeForm("Nothing", "Nothing");

	john.signForm(*sc);
	john.signForm(*rr);
	john.signForm(*pp);

	john.executeForm(*sc);
	john.executeForm(*rr);
	john.executeForm(*pp);

	delete sc;
	delete rr;
	delete pp;
}
