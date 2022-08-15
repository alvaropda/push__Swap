# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 11:35:40 by apeinado          #+#    #+#              #
#    Updated: 2022/08/04 12:11:33 by apeinado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = Push_swap
 
SRC = 	stack_array.c 	/
		free_stack.c 	/

all: $(NAME)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME)
	@$(MAKE) -C libft/ fclean

re: fclean all
