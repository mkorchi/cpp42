CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = info

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = Base.hpp A.hpp B.hpp C.hpp

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