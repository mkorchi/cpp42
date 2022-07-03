CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = fragtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJ = $(SRC:.cpp=.o)

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