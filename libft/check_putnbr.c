#include "libft.h"
#include <unistd.h>

int main ()
{
    ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putchar_fd(42, 1);
	write(1, "\n", 1);
	ft_putstr_fd("42", 1);
	write(1, "\n", 1);
	ft_putendl_fd("42", 1);
}