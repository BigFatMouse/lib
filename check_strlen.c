#include "libft.h"
#include <string.h>

int main (void)
{
	const char a[] = "vous risquez de faire merde";
	int n1 = strlen (a);
	int n2 = ft_strlen (a);
	printf("str = vous risquez de faire merde\n");
	printf("strlen(str) = %d\nft_strlen(str) = %d\n", n1,n2);
	return (0);
}
