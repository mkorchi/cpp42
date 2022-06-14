CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = bur

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = Bureaucrat.hpp Form.hpp

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