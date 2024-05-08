# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 15:03:46 by tsilva-f          #+#    #+#              #
#    Updated: 2024/05/08 02:52:01 by tsilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

FUNC = ft_isprint.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_memchr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
						ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
							ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c 

FUNC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c #ft_lstmap.c 

CFLAGS = -Wall -Wextra -Werror -g3

CC = cc
RM = rm -rf

OBJS = $(FUNC:.c=.o)
OBJS_BONUS = $(FUNC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

