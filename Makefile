SRCS	=	is_alpha.c\
		is_digit.c\
		is_alnum.c\
		is_ascii.c\
		is_print.c\
		strlen.c\
		to_upper.c\
		to_lower.c\
		memset.c\
		bzero.c\
		memcpy.c\
		memmove.c\
		strlcpy.c\
		strlcat.c\
		strchr.c\
		strrchr.c\
		strncmp.c\
		memchr.c\
		memcmp.c\
		strnstr.c\
		atoi.c\
		calloc.c\
		strdup.c\
		substr.c\
		strjoin.c\
		strtrim.c


OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean	all

.PHONY:		all clean fclean re

