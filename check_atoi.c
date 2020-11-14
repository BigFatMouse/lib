#include <stdlib.h>
#include "libft.h"

int main()
{
	char s1[] = "";
	char s2[] = "42";
	char s3[] = "561456321234456567";
	char s4[] = "gh56s";
	char s5[] = "008790lqe";
	char s6[] = "  +8790lqe";
	char s7[] = "-";
	printf("atoi(null): %d\n", atoi(s1));
	printf("ft_atoi(null): %d\n", ft_atoi(s1));
	printf("atoi(42): %d\n", atoi(s2));
	printf("ft_atoi(42): %d\n", ft_atoi(s2));
	printf("atoi(561456321234456567): %d\n", atoi(s3));
	printf("ft_atoi(561456321234456567): %d\n", ft_atoi(s3));
	printf("atoi(gh56s): %d\n", atoi(s4));
	printf("ft_atoi(gh56s): %d\n", ft_atoi(s4));
	printf("atoi(008790lqe): %d\n", atoi(s5));
	printf("ft_atoi(008790lqe): %d\n", ft_atoi(s5));
	printf("atoi(  +8790lqe): %d\n", atoi(s6));
	printf("ft_atoi(  +8790lqe): %d\n", ft_atoi(s6));
	printf("atoi(-): %d\n", atoi(s7));
	printf("ft_atoi(-): %d\n", ft_atoi(s7));

	return 0;
}