NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean"

fclean: 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re