CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = diamondtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp

OBJ = $(SRC:.cpp=.o)

HEADERS = ClapTrap.hpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC) $(HEADERS)
	c++ $(CFLAGS) -c $(SRC)


clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all