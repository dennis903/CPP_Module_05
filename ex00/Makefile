CC = clang++
CFLAGS = -Wall -Wextra -Werror
TARGET = Bureaucrat

OBJS = Bureaucrat.cpp 	\
		main.cpp

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
	rm -rf $(TARGET)

fclean : clean
	rm -rf $(TARGET)

re : clean all%