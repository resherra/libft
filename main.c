#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int p[5];
	ft_memset(p, '0', 5);
	for (int i = 0; i < 5; i++)
		printf("%d => %d\n", i, p[i]);
	return (0);
}