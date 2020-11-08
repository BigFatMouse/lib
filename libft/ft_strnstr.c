/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 04:33:10 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/08 15:25:16 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
				j++;
			if (j + i == len)
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
