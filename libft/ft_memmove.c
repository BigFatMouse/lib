/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:27:23 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/07 00:20:50 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*str1;
	unsigned char		*str2;
	size_t				i;

	if(!src && !dst)
		return (0);
	str1 = src;
	str2 = dst;
	i = 0;
	if (str1 >= str2)
	{
		while (i < n)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	if (str1 < str2)
	{
		while (n > 0)
		{
			n--;
			str2[n] = str1[n];
		}
	}
	return (str2);
}
