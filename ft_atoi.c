#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int number;
    int sign;

    number = 0;
    sign = 0;
    
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*(str++) == '-' || *(str++) == '+')
            return 0;
        else if (*str == '-')
            sign = 1;   
        ++str ;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        number = number * 10;
        number += *str - 48;
        str++;
    }
    if (sign == 1)
        return -number;
    return number;
}

int main(int ac, char **av)
{
    (void)ac;
    printf("%d\n", atoi(av[1]));
    printf("%d\n", ft_atoi(av[1]));
}