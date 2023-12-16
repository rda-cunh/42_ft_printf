# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 23:03:04 by rda-cunh          #+#    #+#              #
#    Updated: 2023/12/16 16:51:43 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft

SRC_DIR		= ./src
PRINTF_SRCS	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putpointer.c

OBJS		= $(PRINTF_SRCS:.c=.o)

CC			= cc 
AR			= ar rcs
RM			= rm -rf 
CFLAGS		= -Wall -Wextra -Werror
CP			= cp

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
			$(CP) $(LIBFT) $(NAME)
			$(AR) $(NAME) $(OBJS)

$(LIBFT):	$(LIBFTDIR)
			$(MAKE) -C $(LIBFTDIR)

%.o: 		$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(MAKE) clean -C $(LIBFTDIR)
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C $(LIBFTDIR)
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re