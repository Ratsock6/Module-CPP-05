/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:25:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 18:19:39 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat steve("Steve", 3);
	Bureaucrat john("John", 148);

	Form timbre("Timbre fiscal", 30, 20);
	Form impot("Declaration d'impots", 150, 20);

	steve.signForm(timbre);
	john.signForm(timbre);
	john.signForm(impot);

	try
	{
		timbre.beSigned(john);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalidLow("Invalid", 151, 20);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalidHigh("Invalid", 0, 20);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
