CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = find


SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = easyfind.hpp

all: $(NAME)

$(NAME): $(OBJ) 
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC) $(HEADERS)
	c++ $(CFLAGS) -c $(SRC)


clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all