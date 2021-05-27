# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:21:36 by anolivei          #+#    #+#              #
#    Updated: 2021/05/26 23:03:41 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC_DIR = sources
OBJ_DIR = .objs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC =	$(SRC_DIR)/main.c \
		$(SRC_DIR)/sa.c \
		$(SRC_DIR)/sb.c

OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

CC = clang
HEAD = -I./includes -I./$(LIBFT_DIR)
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
LFLAGS = -L ./$(LIBFT_DIR) -lft
RM = /bin/rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
		$(CC) $(OBJ) $(HEAD) $(CFLAGS) $(LFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(LIBFT):
		make -C $(LIBFT_DIR)

clean:
		make clean -C $(LIBFT_DIR)
		$(RM) $(OBJ_DIR)

fclean: clean
		make fclean -C $(LIBFT_DIR)
		$(RM) $(NAME)

re: fclean all

.PONY: all clean fclean re