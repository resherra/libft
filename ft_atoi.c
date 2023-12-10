#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str)
{
        int     number;
        int     sign;

        number = 0;
        sign = 0;
        while ((*str >= 9 && *str <= 13) || *str == 32)
                str++;
        while (*str == '-' || *str == '+')
        {
                if (*(str + 1) == '-' || *(str + 1) == '+')
                        return (0);
                else if (*str == '-')
                        sign = 1;
                str++;
        }
        while (*str && (*str >= '0' && *str <= '9'))
        {
                number = (number * 10) + (*str - 48);
                str++;
        }
        if (sign == 1)
                return (-number);
        return (number);
}

int     main(int ac, char **av)
{
        (void)ac;
        printf("%d\n", atoi(av[1]));
        printf("%d\n", ft_atoi(av[1]));
}