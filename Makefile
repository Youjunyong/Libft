# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/28 15:05:15 by juyou             #+#    #+#              #
#    Updated: 2021/01/02 14:59:43 by juyou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC      = gcc
C_FLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEADER    = libft.h
SRCS    = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c\
			ft_isdigit.c ft_isalnum.c ft_atoi.c ft_strlcat.c\
			ft_strchr.c ft_calloc.c ft_isascii.c ft_isprint.c\
			ft_toupper.c ft_tolower.c ft_strnstr.c ft_memccpy.c\
			ft_memchr.c ft_memcmp.c ft_memmove.c ft_strdup.c ft_strlcpy.c\
			ft_strncmp.c ft_strrchr.c
			
OBJS    = $(SRCS:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(C_FLAGS) -c $(SRCS)
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
