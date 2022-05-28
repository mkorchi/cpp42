

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)


clean:

fclean: clean
	rm -f $(NAME)

re: fclean all