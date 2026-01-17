.phony = all re clean fclean
CC = c++
FLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
NAME = megaphone
FILES = megaphone
OBJ_DIR = .objects/
SRC_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))
DEPS = $(addprefix $(OBJ_DIR), $(addsuffix .d, $(FILES)))

all: $(NAME)
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp 
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 
-include $(DEPS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) clean

re: fclean all
