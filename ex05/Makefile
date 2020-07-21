# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gekang <gekang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 16:10:57 by gekang            #+#    #+#              #
#    Updated: 2020/07/21 20:11:33 by gekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES	= ./srcs/main.c ./srcs/ft_atoi.c ./srcs/ft_calc.c ./srcs/ft_ops.c ./srcs/ft_write_utils.c
OFILES	= ${CFILES:.c=.o}
TARGET	= do-op
INCL 	= includes
CC		= gcc
REMOVE		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCL}

${TARGET}: ${OFILES}
	${CC} ${CFLAGS} ${OFILES} -o ${TARGET}

all: ${TARGET}

clean:
	${REMOVE} ${OFILES}

fclean: clean
	${REMOVE} ${TARGET}

re: fclean all

.PHONY: all clean fclean re .c.o