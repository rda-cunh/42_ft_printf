/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:39:17 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/07 17:35:49 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexlen(unsigned int c)
{
	int len;
	
	len = 0;
	while (c != 0)
	{
		c = c/16;
		len++;
	}	
	return (len);
}	

int ft_printhex (unsigned int c, const char )
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


int	ft_puthex(unsigned int c, char *base)
{
	char	*base;
	int		len;

	len = ft_hexlen(c);
	base = ft_(c, base, len);
	free(str);
	return (len); 
}
