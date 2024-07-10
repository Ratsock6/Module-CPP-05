/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:06 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 14:49:00 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	target;
public:
	PresidentialPardonForm(void);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm(std::string target);

	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

	void	execute(Bureaucrat const &executor) const;
};
