/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:17:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/07 11:25:20 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_after_percent(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
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
