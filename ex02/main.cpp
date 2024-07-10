/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:25:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 14:54:45 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Bureaucrat				steve("Steve", 3);
	Bureaucrat				john("John", 148);
	RobotomyRequestForm		rr("rr");
	PresidentialPardonForm	pp("pp");
	ShrubberyCreationForm	sc("sc");

	steve.executeForm(rr);
	steve.executeForm(pp);
	steve.executeForm(sc);

	john.signForm(rr);
	john.signForm(pp);
	john.signForm(sc);

	steve.signForm(rr);
	steve.signForm(pp);
	steve.signForm(sc);

	john.executeForm(rr);
	john.executeForm(pp);
	john.executeForm(sc);

	steve.executeForm(rr);
	steve.executeForm(pp);
	steve.executeForm(sc);
	// Bureaucrat 				sacha("Sacha", 1);
	// ShrubberyCreationForm	form1("quoi");
	// RobotomyRequestForm		form2("feur");
	// PresidentialPardonForm form3("Zaphod Beeblebrox");

	// sacha.executeForm(form1);
	// sacha.executeForm(form2);
	// sacha.executeForm(form3);

	// return (0);
}
