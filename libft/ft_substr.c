/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:38:29 by mhogg             #+#    #+#             */
/*   Updated: 2020/11/08 15:09:45 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(len + 1);
	if (str == NULL || s == NULL)
		return (NULL);
	if (start < ft_strlen(s))
		while (i < len && s[start])
			str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
