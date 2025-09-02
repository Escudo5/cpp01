NAME    = UnnecessaryViolence

SRC     = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
OBJ     = $(SRC:.cpp=.o)

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "[UnnecessaryViolence] Object files cleaned."

fclean: clean
	@rm -rf $(NAME)
	@echo "[UnnecessaryViolence] Executable cleaned."

re: fclean all

.PHONY: all clean fclean re