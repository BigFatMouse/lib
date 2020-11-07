#include <string.h>
#include "libft.h"

int  main(void)
{
//	char	*str1;
//	char	*str2;

	char str1[] = "abcdefg";
	char str2[] = "abcdefg";
//	ft_bzero(str1, 1);
//	ft_bzero(str2, 1);
	printf ("memcmp: %d \n", memcmp (str1, str2, 6));
	printf ("ft_memcmp: %d\n", ft_memcmp (str1, str2, 6));
	return 0;
}
