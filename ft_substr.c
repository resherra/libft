#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (*s == 0 || (start) > (unsigned int)(size - 1))
		return (strdup(""));
	if (len <= size - start)
		str = malloc(len + 1);
	else
		str = malloc((size - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		str[i++] = s[start++];
	}
	str[i] = 0;
	return (str);
}
