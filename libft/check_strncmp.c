#include "libft.h"
#include <string.h>

int main()
{
	char	s1[] = "hello";
	char	s2[] = "hello!!";
	char	a[3] = "";
	char	b[3] = "";

	ft_bzero(a, 3);
	ft_bzero(b, 3);

	printf("strncmp: %d\n", strncmp(s1, s2, 5));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: %d\n", strncmp(s1, s2, 7));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 7));
	printf("strncmp: %d\n", strncmp(a, b, 2));
	printf("ft_strncmp: %d\n", ft_strncmp(a, b, 2));
	return 0;
}