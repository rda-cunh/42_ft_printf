/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:17:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/25 00:36:57 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "../libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	
	va_start(args, format);
	while(*format)
	{
		if (*format == '%')
		{
			formatt++;
			if(*format == 'd')
			{
				printf("%d", va_arg(args, int));
			}
			else if (*format == 's')
			{
				printf("%d", va_arg(args, char *));
			}
			else 
			{
				putchar(*format);
			}
			format++;
		}
	}
	va_end(args)
}

int	main(void)
{
	mini_printf ("Hello %s, number is %d\n", "World", 42);
	return (0);
}