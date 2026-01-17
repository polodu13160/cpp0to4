.PHONY = all re clean fclean
CC = c++
FLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98 -I.
NAME = My_Awesome_PhoneBook
CLASSES = Contact/Contact\
		  PhoneBook/PhoneBook
FILES = main.cpp
TOOLS = tools/tools.cpp
OBJ_DIR = .objects/
SRCS = $(addsuffix .cpp, $(CLASSES)) $(FILES) $(TOOLS)
OBJS = $(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRCS))
DEPS = $(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRCS))

all: $(NAME)
$(OBJ_DIR)%.o: %.cpp 
	@mkdir -p $(@D) 
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 
-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
