CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex01
SRCS = 	main.cpp \
		Span.cpp


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean all re