#include "libft.h"
#include <string.h>

int main()
{
	char	s1[] = "hello";
	char	s2[] = "hello!!";
	char	a[3] = "";
	char	b[3] = "";
	char *str1 = "atoms\0\0\0\0";
	char *str2 = "atoms\0abc";
	size_t size = 8;
	int i1 = ((strncmp(str1, str2, size) > 0) ? 1 : ((strncmp(str1, str2, size) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(str1, str2, size) > 0) ? 1 : ((ft_strncmp(str1, str2, size) < 0) ? -1 : 0));

	ft_bzero(a, 3);
	ft_bzero(b, 3);

	printf("strncmp: %d\n", strncmp(s1, s2, 5));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: %d\n", strncmp(s1, s2, 7));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 7));
	printf("strncmp: %d\n", strncmp(a, b, 2));
	printf("ft_strncmp: %d\n", ft_strncmp(a, b, 2));
	printf("strncmp: %d\n", i1);
	printf("ft_strncmp: %d\n", i2);
	return 0;
}