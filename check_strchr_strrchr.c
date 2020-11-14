#include <string.h>
#include "libft.h"

int  main(void)
{
	char	str[] = "abcdecg";
	printf ("strchr: %s\n", strchr (str, 'c'));
	printf ("ft_strchr: %s\n", ft_strchr (str, 'c'));
	printf ("strrchr: %s\n", strrchr (str, 'c'));
	printf ("ft_strrchr: %s\n", ft_strrchr (str, 'c'));
	printf ("strchr: %s\n", strchr (str, '\0'));
	printf ("ft_strchr: %s\n", ft_strchr (str, '\0'));
	printf ("strrchr: %s\n", strrchr (str, '\0'));
	printf ("ft_strrchr: %s\n", ft_strrchr (str, '\0'));

	return 0;
}