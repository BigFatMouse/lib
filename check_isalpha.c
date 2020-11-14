#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char c1 = 'a';
	int c2 = 200;
	char c3 = '\0';
	char c4 = '9';

	printf("isalpha('a') = %d\n", isalpha(c1));
	printf("ft_isalpha('a') = %d\n", ft_isalpha(c1));
	printf("isalpha(200) = %d\n", isalpha(c2));
	printf("ft_isalpha(200) = %d\n", ft_isalpha(c2));
	printf("isalpha(null) = %d\n", isalpha(c3));
	printf("ft_isalpha(null) = %d\n", ft_isalpha(c3));
	printf("isdigit('a') = %d\n", isalpha(c1));
	printf("ft_isdigit('a') = %d\n", ft_isalpha(c1));
	printf("isdigit('9') = %d\n", isalpha(c4));
	printf("ft_isdigit('9') = %d\n", ft_isalpha(c4));
}