CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ZombieHorde
SRCS = 	main.cpp \
		zombie.cpp \
		zombieHorde.cpp \
		
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean all re