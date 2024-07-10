/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 04:48:12 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 14:39:48 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm: public AForm
{
private:
	std::string	target;
public:
    RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm(std::string target);

	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	void	execute(Bureaucrat const &executor) const;
};

