CC = clang++
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98
TARGET = ex02

OBJS = Bureaucrat.cpp 	\
		Form.cpp \
		PresidentialPardonForm.cpp	\
		RobotomyRequestForm.cpp	\
		ShrubberyCreationForm.cpp	\
		main.cpp	\

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
	rm -rf $(TARGET)

fclean : clean
	rm -rf $(TARGET)
	rm -rf $(TARGET).dSYM
re : clean all
