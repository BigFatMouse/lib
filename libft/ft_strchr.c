/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 02:50:44 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/07 04:15:15 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	n;
	int	i;

	i = 0;
	n = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + n);
	while (i < n)
	{
		if (s[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
