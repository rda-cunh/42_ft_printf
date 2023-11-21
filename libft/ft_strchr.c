/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:39:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/08 00:27:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;

	altc = c;
	alts = (char *)s;
	while (*alts != '\0')
	{
		if (*alts == altc)
			return (alts);
		alts++;
	}
	if (altc == 0)
		return (alts);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Vai ser um teste";
	char c = 't';

	printf("My function: %s\n", ft_strchr(str, c));
	printf("My function: %s\n", strchr(str, c));
}
*/
