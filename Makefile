NAME = ft_containers

CC = clang++

FLAGS = -Werror -Wextra -Wall

CCF = $(CC) $(FLAGSS)

RM = rm -f

LIST_SRC = List/

LIST_FILES = List.cpp

LIST_OBJ = $(addprefix $(LIST_SRC), $(LIST_FILES))

LIST_OBJS = $(LIST_OBJ:.cpp=.o)


all: $(NAME)

$(NAME): $(LIST_OBJS) main.cpp
	$(CCF) $(LIST_OBJS) main.cpp -o $@ -I$(LIST_SRC)

%.o : %.cpp $(LIST_SRC)
	$(CCF) $< -c -o $@

clean:
	$(RM) $(LIST_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all