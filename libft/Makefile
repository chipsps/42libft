# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 18:41:43 by pchi              #+#    #+#              #
#    Updated: 2023/11/29 20:52:25 by pchi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- UTILE ---

NAME = libft.a
INC = ./
AR = ar -rcs
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

# --- FILES ---

SRC =	ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
	ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c \
	ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c \
	ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
	ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
	ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c 

SRC_OBJS = 		$(SRC:.c=.o)

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BSRC_OBJS = 	$(BSRC:.c=.o)

# --- COMPILATION ---

all: 		$(NAME)

$(NAME): 	$(SRC_OBJS)
		$(AR) $(NAME) ${SRC_OBJS}

bonus: $(BSRC_OBJS)
		$(AR) $(NAME) $(BSRC_OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BSRC)
# 	gcc -nostartfiles -shared -o libft.so $(SRC_OBJS) $(BSRC_OBJS)

# --- CLEANING ---

clean: 
	$(RM) $(SRC_OBJS) $(BSRC_OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
