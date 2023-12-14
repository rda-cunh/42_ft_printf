# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:01:20 by rda-cunh          #+#    #+#              #
#    Updated: 2023/12/14 19:07:29 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_DIR = src/
LIBFT_DIR = libft/
SRCS = $(addprefix $(SRCS_DIR), ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putpointer.c)
LIBFT_SRCS = $(addprefix $(LIBFT_DIR), ft_itoa.c)
OBJS = $(SRCS:.c=.o)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
MAKE = make -C
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_OBJS)
	$(MAKE) $(LIBFT_DIR)
	$(AR) $(NAME) $^
	
clean: 
	$(MAKE) clean $(LIBFT_DIR)
	$(RM) $(OBJS) $(LIBFT_OBJS)

fclean: clean
	$(MAKE) fclean $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
