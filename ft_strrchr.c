/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 03:43:16 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/11 11:52:55 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int n;

	n = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + n);
	while (n >= 0)
	{
		if (s[n] == c)
			return ((char*)s + n);
		n--;
	}
	return (NULL);
}
