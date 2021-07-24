# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 21:21:36 by anolivei          #+#    #+#              #
#    Updated: 2021/07/24 19:08:17 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC_DIR = sources
OBJ_DIR = .objs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC =	$(SRC_DIR)/main.c \
		$(SRC_DIR)/check_args.c \
		$(SRC_DIR)/is_integer.c \
		$(SRC_DIR)/ps_lst.c \
		$(SRC_DIR)/quick_sort.c \
		$(SRC_DIR)/ft_itob.c \
		$(SRC_DIR)/pa.c \
		$(SRC_DIR)/pb.c \
		$(SRC_DIR)/sa.c \
		$(SRC_DIR)/ra.c \
		$(SRC_DIR)/rra.c \
		$(SRC_DIR)/push_swap_short.c \
		$(SRC_DIR)/push_swap_long.c \
		$(SRC_DIR)/exit.c

OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

CC = clang
HEAD = -I./includes -I./$(LIBFT_DIR)
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
LFLAGS = -L ./$(LIBFT_DIR) -lft
RM = /bin/rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
		@$(CC) $(OBJ) $(HEAD) $(CFLAGS) $(LFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(LIBFT):
		@make -C $(LIBFT_DIR)

debug_mac: $(OBJ) $(LIBFT)
		@gcc $(LFLAGS) $(HEAD) $(SRC) $(CFLAGS) -o "push_swap_debug"

debug_linux:
		@gdd $(LFLAGS) $(HEAD) $(SRC) $(CFLAGS) -o "push_swap_debug"

clean:
		@make clean -C $(LIBFT_DIR)
		@$(RM) $(OBJ_DIR)

fclean: clean
		@make fclean -C $(LIBFT_DIR)
		@$(RM) $(NAME)
		@$(RM) push_swap_debug
		@$(RM) push_swap_debug.dSYM

re: fclean all

.PONY: all clean fclean re