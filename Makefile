NAME = ft_containers

CC = clang++

FLAGS = -Werror -Wextra -Wall -g3 -fsanitize=address

CCF = $(CC) $(FLAGS)

RM = rm -f

LIST_SRC = List/


all: $(NAME)

$(NAME): $(LIST_OBJS) $(LIST_SRC) main.cpp
	$(CCF) $(LIST_OBJS) main.cpp -o $@ -I$(LIST_SRC)


clean:
	$(RM) $(LIST_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all