#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t n;
	size_t s;
	size_t d;

	n = 0;
	i = 0;

	n = ft_strlen(dst);
	if (dstsize <= n)
		return (dstsize + ft_strlen(src));
	else
	{
		while (src[i] && n < dstsize - 1)
		{
			dst[n] = src[i];
			n++;
			i++;
		}
		dst[n] = '\0';
	}
	return (dstsize);
}