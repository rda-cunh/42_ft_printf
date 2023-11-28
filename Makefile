# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:01:20 by rda-cunh          #+#    #+#              #
#    Updated: 2023/11/28 18:36:33 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = $(wildcard *.c)
OBJS = $(CFILES:.c:.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = RM -f

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

