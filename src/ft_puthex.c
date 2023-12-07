/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:39:17 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/07 16:54:41 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexlen(char *str)
{
	int len;
	
	len = 0;
	while (str)
	{
		len++;
	}	
	return (len);
}	

int ft_printhex (int c, char *base, len)
{
	int count;

	count = 0;	
	if (c < len)
	{
		return (ft_putchar(base[c]));
	}
	else
	{
		count = ft_printhex()
		return ()
	}
}


int	ft_puthex(int c, char *base)
{
	char	*base;
	int		len;

	len = ft_hexlen(base);
	base = ft_(c, base, len);
	free(str);
	return (len); 
}
