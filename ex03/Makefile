NAME := bureaucrat03

CFLAGS := -g -Werror -Wall -Wextra -std=c++98

SRC :=	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp
OBJ := $(SRC:.cpp=.o)

%.o:		%.cpp
			c++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			c++ $(OBJ) -o $(NAME) $(CFLAGS)

all:		$(NAME)

clean:		
			$(RM) -f $(OBJ)

fclean:		clean
			$(RM) -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re