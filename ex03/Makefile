NAME = materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp
INC = ICharacter.hpp AMateria.hpp IMateriaSource.hpp Cure.hpp Ice.hpp

INC_DIR = inc/
OBJ_DIR = .obj/
SRC_DIR = src/

INC_P = $(addprefix $(INC_DIR), $(INC))

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))

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
	$(CC) $(CFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_P) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
