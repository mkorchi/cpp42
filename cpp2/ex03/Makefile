CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = point

SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = Fixed.hpp Point.hpp

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