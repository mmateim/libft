# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmatei <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/17 18:43:27 by mmatei            #+#    #+#              #
#    Updated: 2015/11/24 15:54:28 by mmatei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putendl.c ft_strequ.c ft_strnstr.c \
	   ft_putendl_fd.c ft_striter.c ft_strrchr.c ft_atoi.c \
	   ft_putnbr.c ft_striteri.c ft_strsplit.c ft_bzero.c ft_memalloc.c \
	   ft_putnbr_fd.c ft_strjoin.c ft_strstr.c ft_isalnum.c ft_memccpy.c \
	   ft_putstr.c ft_strlcat.c ft_strsub.c ft_isalpha.c ft_memchr.c \
	   ft_putstr_fd.c ft_strlen.c ft_strtrim.c ft_isascii.c ft_memcmp.c \
	   ft_strcat.c ft_strmap.c ft_tolower.c ft_isdigit.c ft_memcpy.c \
	   ft_strchr.c ft_strmapi.c ft_toupper.c ft_isprint.c ft_memdel.c \
	   ft_strclr.c ft_strncat.c ft_itoa.c ft_memmove.c ft_strcmp.c \
	   ft_strncmp.c ft_memset.c ft_strcpy.c ft_strncpy.c \
	   ft_putchar.c ft_strdel.c ft_strnequ.c ft_strnew.c \
	   ft_putchar_fd.c ft_strdup.c ft_strnew.c ft_lstnew.c \
	   ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	   ft_lstmap.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f libft.h.gch

fclean: clean
	/bin/rm -f $(NAME) 

re: fclean all
