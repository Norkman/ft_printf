# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 22:03:57 by nle-bret          #+#    #+#              #
#    Updated: 2022/01/06 14:28:48 by nle-bret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror

DEBUG	?= 0
ifeq ($(DEBUG), 1)
    CFLAGS += -g3 -fsanitize=address
endif

NAME	= libfprintf.a

SRC		= ft_printf.c

OBJS	= ${SRC:.c=.o}

CC		= clang

${NAME}: ${OBJS}
	cd sources && $(MAKE)
	cp sources/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
	rm -f ${OBJS}
	$(MAKE) clean -C ./sources

fclean:	clean
	rm -f ${NAME}
	rm -f libft.a
	$(MAKE) fclean -C ./sources 

re:	fclean all

%.o: %.c
	$(CC) $(FLAGS) -I ft_printf.h -c $<  -o $(<:.c=.o)

.PHONY: all clean fclean re
