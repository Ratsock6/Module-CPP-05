/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:25:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/09 13:05:04 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat steve("Steve", 3);
	Bureaucrat john("John", 148);

	AForm timbre("Timbre fiscal", 30, 20);
	AForm impot("Declaration d'impots", 150, 20);

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
		AForm invalidLow("Invalid", 151, 20);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		AForm invalidHigh("Invalid", 0, 20);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
