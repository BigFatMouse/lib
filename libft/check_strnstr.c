#include "libft.h"
#include <string.h>

int main()
{
	char	h[] = "haystack";
	char	n[] = "st";
	char	a[3] = "";
	char	b[3] = "";

	ft_bzero(a, 3);
	ft_bzero(b, 3);

	printf("strnstr: %s\n", strnstr(h, n, 5));
	printf("ft_strnstr: %s\n", ft_strnstr(h, n, 5));
	printf("strnstr: %s\n", strnstr(h, n, 2));
	printf("ft_strnstr: %s\n", ft_strnstr(h, n, 2));
	printf("strnstr: %s\n", strnstr(h, a, 2));
	printf("ft_strnstr: %s\n", ft_strnstr(h, a, 2));
	return 0;
}