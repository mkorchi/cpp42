CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = animal

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp

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