SRC				=	${wildcard *.c}
SRCS			= ${addprefix ${PRE}, ${SRC}}
OBJS			= ${SRCS:.c=.o}
PRE				=	./
HEAD			=	${wildcard *.h}
NAME			=	libft.a
AR				=	ar rc
LIB				=	ranlib
CC				=	cc
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror
all:			${NAME}
.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}
				${LIB} ${NAME}
re:				fclean all
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} ${NAME}
