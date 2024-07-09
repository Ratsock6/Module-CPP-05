/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:25:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/04 17:57:53 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main_nils()
{
	Bureaucrat steve("Steve", 3);
	Bureaucrat john("John", 148);

	for (int i(0); i < 3; i++)
	{
		try
		{
			steve.upRank();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << steve << std::endl;

	for (int i(0); i < 3; i++)
	{
		try
		{
			john.unRank();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << john << std::endl;

	try 
	{
		Bureaucrat bob("bob", 0);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat james("james", 153);
		std::cout << james << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

int main(void) {
	main_nils();
	Bureaucrat sacha("Sacha", 1);
	std::cout << sacha << std::endl;
	sacha.unRank();
	std::cout << sacha << std::endl;
	try {
		sacha.upRank();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sacha.unRank(200);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat test("test", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat test("test", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}