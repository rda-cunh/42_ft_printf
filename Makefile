# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:01:20 by rda-cunh          #+#    #+#              #
#    Updated: 2023/12/07 10:52:39 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_DIR = src/
SRCS = $(addprefix $(SRCS_DIR), ft_printf.c)
OBJS = $(SRCS:.c=.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
MAKE = make -C 

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^
	
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
