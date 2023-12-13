/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:02:44 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/13 23:33:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int c);
int		ft_putnbr_u(unsigned int c);
int		ft_puthex(unsigned int c, const char format);
int		ft_putpointer(unsigned long long ptr);

#endif