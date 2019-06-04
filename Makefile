# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumaseko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 17:25:52 by sumaseko          #+#    #+#              #
#    Updated: 2019/06/04 17:30:06 by sumaseko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

HEADER = includes/

All: $(NAME)

$(NAME): gcc –c $(SRC) –I $(HEADER)
      ar rc $(NAME) *.o

clean: rm –f *.o

fclean: clean rm –f $(NAME)

re: fclean all
