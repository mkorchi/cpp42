CFLAGS = -std=c++98

NAME = convert

SRC = main.cpp MyConverter.cpp 

OBJ = $(SRC:.cpp=.o)

HEADERS = main.hpp MyConverter.hpp

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