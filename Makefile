NAME	= push_swap

BONUS_NAME = checker

CC		= cc

FLAGS	= -Wall -Werror -Wextra -g

LIBFT	= ./libft/libft.a

SRCS	= 	error_check.c		\
			initialize.c		\
			main.c misc.c		\
			operations_utils.c	\
			operations.c		\
			operations2.c		\
			operations3.c		\
			push_cost_utils.c	\
			push_cost.c			\
			push_swap_utils.c	\
			push_swap_utils2.c	\
			push_swap.c			\
			targets_utils.c		\
			targets.c			\

OBJS	= $(SRCS:.c=.o)

RM		= rm -f

%.o: %.c
	$(CC) $(FLAGS) -I./libft -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBFT)

all: $(NAME)

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

.PHONY: all re clean fclean norm
