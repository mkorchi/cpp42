CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = diamondtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = ClapTrap.hpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	c++ $(CFLAGS) -c $(SRC)


clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all