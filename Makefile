# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/28 15:05:15 by juyou             #+#    #+#              #
#    Updated: 2020/12/28 17:32:13 by juyou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libft.h
SRCS    = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c\
			ft_isdigit.c ft_isalnum.c ft_atoi.c ft_strlcat.c\
			ft_strchr.c
			
OBJS    = $(SRCS:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)
		@echo "[INFO] Library [$(NAME)] created!"

clean:
		@rm -f $(OBJS)
		@echo "[INFO] Objects removed!"

fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] Library [$(NAME)] removed!"

re:		fclean all
