/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 00:21:48 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/07 03:45:41 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void*)str + i);
		i++;
	}
	return (NULL);
}
