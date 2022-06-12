CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = game

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp

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