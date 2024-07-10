/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:06:55 by aallou-v          #+#    #+#             */
/*   Updated: 2024/07/10 04:02:27 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

#define ASCII_TREE \
"                                                         .     \n"\
"                                              .         ;      \n"\
"                 .              .              ;%     ;;       \n"\
"                   ,           ,                :;%  %;        \n"\
"                    :         ;                   :;%;'     ., \n"\
"           ,.        %;     %;            ;        %;'    ,;   \n"\
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'    \n"\
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'     \n"\
"               ;%;      %;        ;%;        % ;%;  ,%;'       \n"\
"                `%;.     ;%;     %;'         `;%%;.%;'         \n"\
"                 `:;%.    ;%%. %@;        %; ;@%;%'            \n"\
"                    `:%;.  :;aa%;          %;@%;'              \n"\
"                      `@%:.  :;%.         ;@@%;'               \n"\
"                        `@%.  `;@%.      ;@@%;                 \n"\
"                          `@%%. `@%%    ;@@%;                  \n"\
"                            ;@%. :@%%  %@@%;                   \n"\
"                              %@bd%%%ll%%:;                    \n"\
"                                #@%%%%%:;;                     \n"\
"                                %@@%%%::;                      \n"\
"                                %@@@%(o);  . '                 \n"\
"                                %@@@o%;:(.,'                   \n"\
"                            `.. %@@@o%::;                      \n"\
"                               `)@@@o%::;                      \n"\
"                                %@@(o)::;                      \n"\
"                               .%@ou@%::;                      \n"\
"                               ;%@-v@%::;.                     \n"\
"                              ;%@@@@%%:;;;.                    \n"\
"                          ...;%@@@@@%%:;;;;,..                 \n"

class ShrubberyCreationForm: public AForm
{
private:
	std::string	target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

	void	execute(Bureaucrat const &executor) const;
};
