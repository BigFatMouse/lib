#include <string.h>
#include "libft.h"

int  main(void)
{
	char	src1[] = "abcdefg";
	char	src2[] = "abcdefg";
	char	src3[] = "abcdefg";
	char	src4[] = "abcdefg";
	char	dst1[] = "1234567";
	char	dst2[] = "1234567";
	char	res1[8];
	char	res2[8];
	char	res3[8];
	char	res4[8];


	printf ("memccpy: %s %s\n", dst1, memccpy (dst1, src1, 'c', 8));
	printf ("ft_memccpy: %s %s\n", dst2, ft_memccpy (dst2, src2, 'c', 8));
	printf ("memchr: %s \n", memchr (src3, 'c', 8));
	printf ("ft_memchr: %s \n", ft_memchr (src4, 'c', 8));

	return 0;
}
