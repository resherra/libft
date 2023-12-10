int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return 1;
    return 0;
}

#include <stdio.h>
int main ()
{
    printf("%d\n", ft_isalnum('a'));
}