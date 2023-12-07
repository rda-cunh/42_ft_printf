/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:17:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/07 14:58:42 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_after_percent(va_list args, const char format)
{
	if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcd"));
	else if (format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCD"));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		lenght;
	va_list	args;

	if (!format)
		return (-1);
	i = 0;
	lenght = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			lenght += ft_after_percent(args, format[i]);
		}
		else
		{
			lenght++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (lenght);
}
