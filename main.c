#include "libft.h"


//string pointed by s;
int main()
{
    int *s;

    int str[] = {1, 2, 4, 6, 7};
    s = str;
    printf("%zu\n", ft_strlen((char *)s));
}