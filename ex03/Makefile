NAME = materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -g

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
INC = ICharacter.hpp AMateria.hpp IMateriaSource.hpp Cure.hpp Ice.hpp

OBJ_DIR = .obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))
DEP = $(OBJ:.o=.d)

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

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEP)
