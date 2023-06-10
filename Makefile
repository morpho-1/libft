# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:46:34 by aylemrab          #+#    #+#              #
#    Updated: 2023/06/01 04:33:10 by aylemrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_split.c\
	ft_atoi.c\
	ft_strmapi.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_strjoin.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_isdigit.c\
	ft_isprint.c\
 	ft_memset.c\
	ft_strncmp.c\
	ft_strchr.c\
	ft_strnstr.c\
	ft_striteri.c\
 	ft_strlcpy.c\
	ft_strlen.c\
	ft_memmove.c\
	ft_substr.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_putchar_fd.c\
	ft_memchr.c\
 	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_printf.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_putchar.c\
	ft_puthexa.c\
	ft_putunbr.c\
	ft_putptr.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all