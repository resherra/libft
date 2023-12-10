#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return i;
}

int main()
{
    printf("%d\n", ft_strlen("hell"));
}