/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 03:43:16 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/07 04:10:21 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int n;

	n = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + n);
	while (n > 0)
	{
		if (s[n] == c)
			return ((char*)s + n);
		n--;
	}
	return (NULL);
}
