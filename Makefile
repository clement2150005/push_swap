# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 09:36:00 by ccolin            #+#    #+#              #
#    Updated: 2024/07/01 09:54:21 by ccolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= cc
FLAGS	= -Wall -Werror -Wextra
LIBFT	= ./libft/libft.a
SRCS	= ${wildcard *.c}
OBJS	= ${SRCS:.c=.o}
AR 		= ar
RM		= rm -f

%.o:%.c
	$(CC) $(FLAGS) -I./libft -c $< -o $@

${NAME}: $(LIBFT) ${OBJS}
	make -C libft
	cp ${LIBFT} ${NAME}
	${AR} rcs ${NAME} ${OBJS}

all: ${NAME}

bonus:
	@make all
	
$(LIBFT):
	make -C libft

clean:
	make fclean -C libft
	${RM} ${OBJS}

fclean: clean
	make fclean -C libft
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader ${SRCS}
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean