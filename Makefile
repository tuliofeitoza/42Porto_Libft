# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 15:03:46 by tsilva-f          #+#    #+#              #
#    Updated: 2024/04/20 02:49:40 by tsilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nome da blibioteca.
NAME = libft.a

#Funcoes a serem incluidas na blibioteca.
FUNC = ft_isprint.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c ft_memset.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c \
				ft_strrchr.c

#Flags.
CFLAGS = -Wall -Wextra -Werror  -g3 #-fsanitize=address

#Comandos requiridos.
CC = cc
RM = rm -rf

#Gera uma lista de arquivos de objetos (.o) a partir dos arquivos-fonte (.c).
OBJS = $(FUNC:.c=.o)

#Comentario apenas para ficar mais visivel a execucao. 
MSGCC = @echo "Compiled"
MSGAR = @echo "Created static library $(NAME)"
MSGRM = @echo "Cleaned"

#Criar a blibioteca.
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(MSGAR)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	$(MSGCC)

#Aapaga os arquivos gerados.
clean:
	$(RM) $(OBJS)
	$(MSGRM)

#Apaga tudo incluindo a blibioteca.
fclean: clean 
	$(RM) $(NAME)
	$(MSGRM)

#Recompila tudo.
re: fclean all
