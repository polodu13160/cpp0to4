.PHONY= all clean re fclean FORCE

CC = c++
CXXFLAGS = -Wall -Werror -Wextra  -MMD -MP -I. -std=c++98



NAME = My_first_class
FILES = Fixed main
OBJ_DIR = objects/
SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))
DEPS = $(addprefix $(OBJ_DIR), $(addsuffix .d, $(FILES)))

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS) 
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)
-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all