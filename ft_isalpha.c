#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int main()
{
   printf("%d\n", ft_isalpha('w')); 
}