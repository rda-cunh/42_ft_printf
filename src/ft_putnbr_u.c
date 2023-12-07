/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:00:22 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/07 13:37:12 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_u(unsigned int c)
{
	char	*str;
	int		len;

	str = ft_utoa(c);
	len = ft_putstr(str);
	free(str);
	return (len); 
}
