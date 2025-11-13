NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
INC = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJ_DIR = .obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))
DEP = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.d))

.PHONY = all re clean fclean

all : $(NAME)

clean :
	 rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean
	$(MAKE) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEP)
