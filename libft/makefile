# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 18:41:43 by pchi              #+#    #+#              #
#    Updated: 2023/11/21 21:26:37 by pchi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC = libft.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDEFOLDERS := -I include/

SOURCES_FOLDER := srcs/
OBJECTS_FOLDER := objs/

# --- FILES ---

SRC =	ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
	ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c \
	ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c \
	ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
	ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
	ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c 

SRC_OBJS = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o)

SRC_OBJS := $(addprefix $(OBJECTS_FOLDER), $(SRC_OBJS))
SRC := $(addprefix $(SOURCES_FOLDER), $(SRC))
BONUS_OBJS := $(addprefix $(OBJECTS_FOLDER), $(BONUS_OBJS))
BONUS := $(addprefix $(SOURCES_FOLDER), $(BONUS))

# --- COMPILATION ---

all: $(NAME)

objs/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDEFOLDER) -c $(subst __./.$<) -o $@    


# --- CLEANING ---

clean:  rm -rf $(OBJECTS_FOLDER) $(SRC_OBJS) $(BONUS_OBJS)
		ranlib $(NAME)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: Cclean fclean all re
