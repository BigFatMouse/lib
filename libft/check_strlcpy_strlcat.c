#include "libft.h"
#include <string.h>
int  main(void)
{
	char	src[] = "hello world!!";
	char	dst1[] = "12345";
	char	dst2[] = "12345";
	char	dst3[10] = "12345";
	char	dst4[10] = "12345";
	char	*src0 = NULL;
	char	*dst0 = NULL;

	size_t	n1, n2, n3, n4, n5, n6;

	printf("src: %s, dst: %s\n", src, dst1);
	n1 = strlcpy(dst1, src, 3);
	printf("strlcpy: dst %s src %s return: %zu\n", dst1, src, n1);
	n2 = ft_strlcpy(dst2, src, 3);
	printf("ft_strlcpy: dst %s src %s return: %zu\n", dst2, src, n2);
	//n3 = strlcpy(dst1, src0, 3);	//segmentation fault
	//printf("strlcpy: dst %s src %s lensrc %zu\n", dst1, src0, n3);
	//n4 = ft_strlcpy(dst0, src, 3);	//segmentation fault
	//printf("ft_strlcpy: dst %s src %s lensrc %zu\n", dst1, src0, n4);
	n5 = strlcat(dst3, src, 8);
	printf("strlcat: dst %s src %s return:  %zu\n", dst3, src, n5);
	n6 = ft_strlcat(dst4, src, 8);
	printf("ft_strlcat: dst %s src %s return:  %zu\n", dst4, src, n6);
	n5 = strlcat(dst3, src, 3);
	printf("strlcat: dst %s src %s return:  %zu\n", dst3, src, n5);
	n6 = ft_strlcat(dst4, src, 3);
	printf("ft_strlcat: dst %s src %s return:  %zu\n", dst4, src, n6);


	return 0;
}