#include <string.h>
#include <strings.h>
#include "libft.h"

int  main(void)
{
	char	*s;
	char	*k;
	int		i = 0;
	char	a[11]="1234567890";
	char	b[11]="1234567890";

/*	check ft_memset	*/

	s = memset (a, '1', 10);
	printf ("memset(a, '1', 10): %s\n", s);
	k = ft_memset (b, '1', 10);
	printf ("ft_memset(b, '1', 10): %s\n\n", k);

/*	check ft_bzero	*/

	char	c[11]="1234567890";
	char	d[11]="1234567890";
	bzero(c, 0);
	printf ("bzero(c, 0): %s\n", c);
	ft_bzero(d, 0);
	printf ("ft_bzero(d, 0): %s\n", d);
	bzero(a, 10);
	printf("bzero(a, 10): ");
	while (i < 10)
	{
		printf("%c", a[i]);
		i++;
	}
	i = 0;
	ft_bzero(d, 10);
	printf("\nft_bzero(b, 10): ");
	while (i < 10)
	{
		printf("%c", d[i]);
		i++;
	}
	printf("\n");

	return (0);
}
