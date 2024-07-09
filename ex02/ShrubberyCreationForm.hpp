/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:06:55 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/09 15:30:33 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
private:
	/* data */
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &shrubberyCreationForm);
	void					execute(Bureaucrat const &executor) const;
};
