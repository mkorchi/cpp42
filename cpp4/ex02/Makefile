CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = animal

SRC = main.cpp Cat.cpp Dog.cpp AAnimal.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

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