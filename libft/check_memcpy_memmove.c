#include <string.h>
#include "libft.h"

int  main(void)
{
	char	s1[] = "1234567890";
	char	s2[] = "1234567890";
	char	s3[] = "1234567890";
	char	s4[] = "1234567890";
	char	s5[] = "1234567890";
	char	s6[] = "1234567890";

	printf("s = %s\n", s1);
	memcpy (s1, s1 + 5, 5);	// не пересекаются
	printf ("memcpy(s, s+3, 5): %s\n", s1);
	ft_memcpy (s2, s2 + 5, 5);	// не пересекаются
	printf ("ft_memcpy(s, s+5, 5): %s\n", s2);
	memcpy (s3+4, s3+3, 3);	// пересекаются
	printf ("memcpy(s, s+2, 5): %s\n", s3);
	ft_memcpy (s4+4, s4+3, 3);	// пересекаются
	printf ("ft_memcpy(s+4, s+3, 5): %s\n", s4);
	memmove(s5+4, s5+3, 3);	// пересекаются
	printf ("memmove(s+4, s+3, 3): %s\n", s5);
	ft_memmove(s6+4, s6+3, 3);	// пересекаются
	printf ("ft_memmove(s+4, s+3, 3): %s\n", s6);

	return 0;
}
