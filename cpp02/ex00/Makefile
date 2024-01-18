CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex00
SRCS = 	main.cpp \
		Fixed.cpp \
		
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean all re