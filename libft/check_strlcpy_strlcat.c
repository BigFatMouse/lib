#include "libft.h"
#include <string.h>
int  main(void)
{
	char	src1[] = "hello world!!";
	char	src2[] = "hello world!!";
	char	src3[] = "hello world!!";
	char	src4[] = "hello world!!";
	char	dst1[] = "12345";
	char	dst2[] = "12345";
	char	dst3[] = "12345";
	char	dst4[] = "12345";
	size_t	n1, n2, n3, n4;

	printf("src: %s, dst: %s\n", src1, dst1);
	n1 = strlcpy(dst1, src1, 3);
	printf("strlcpy: dst %s src %s lensrc %zu\n", dst1, src1, n1);
	n2 = ft_strlcpy(dst2, src2, 3);
	printf("ft_strlcpy: dst %s src %s lensrc %zu\n", dst2, src2, n2);
	//n3 = strlcat(dst3, src3, 8);
	//printf("strlcat: dst %s src %s len src+dst  %zu\n", dst3, src3, n3);
	n4 = ft_strlcat(dst4, src4, 8);
	printf("ft_strlcat: dst %s src %s len src+dst  %zu\n", dst4, src4, n4);

	return 0;
}