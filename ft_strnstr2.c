#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	size_t	k;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && k < len)
		{
			k++;
			j++;
			if (!needle[j])
				return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
