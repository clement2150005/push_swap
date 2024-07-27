NAME	= push_swap
CC		= cc
FLAGS	= -Wall -Werror -Wextra -g
LIBFT	= ./libft/libft.a
SRCS	= ${wildcard *.c}
OBJS	= ${SRCS:.c=.o}
RM		= rm -f

%.o: %.c
	$(CC) $(FLAGS) -I./libft -c $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBFT)

all: $(NAME)

bonus: all

$(LIBFT):
	make -C libft

clean:
	make clean -C libft
	${RM} ${OBJS}

fclean: clean
	make fclean -C libft
	${RM} $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader ${SRCS}
	norminette -R CheckDefine *.h

leaks: $(NAME)
	leaks --atExit -- ./$(NAME) "1 2 3 4 5 6"

.PHONY: all re clean fclean norm bonus leaks
