#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    int i = 0;
    const char *str = s;
    while (s[i])
    {
        if (s[i] == c)
        {
            return (char *)str + i;
        }
        i++;
    } 
    if (c == '\0')
        return "\0";

    return NULL;
}


int main()
{
    printf("%s\n", ft_strchr("helpe", 'l'));
}