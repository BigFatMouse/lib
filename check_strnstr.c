#include "libft.h"
#include <string.h>

int	main()
{
	char	h[] = "hello";
	char	n[] = "ll";
	char	a[3] = "";
	char	b[3] = "";
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	ft_bzero(a, 3);


	printf("strnstr: %s\n", strnstr(h, n, 5));
	printf("ft_strnstr: %s\n", ft_strnstr(h, n, 5));
	printf("strnstr: %s\n", strnstr(h, n, 2));
	printf("ft_strnstr: %s\n", ft_strnstr(h, n, 2));
	printf("strnstr: %s\n", strnstr(h, a, 2));
	printf("ft_strnstr: %s\n", ft_strnstr(h, a, 2));
	printf("strnstr: %s\n", i1);
	printf("ft_strnstr: %s\n", i2);
	return (0);
}