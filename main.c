#include "libft.h"

int	main(int ac, char **av)
{
	char **res;
	(void)ac;
	(void)av;
	res = ft_split("  jsonjack    johnjor jie ", ' ');
	for (int i = 0; res[i] != NULL; i++)
		printf("%s\n", res[i]);
	return (0);
}