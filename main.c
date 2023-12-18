#include "libft.h"

int main(void)
{
    char s1[] = "  \t \t \n   \n\n\n\t ";
    char set[] = " \n\t";
    // char s1[] = "heredouanhe";
    // char *set = "he";
    printf("\n|%s|\n", ft_strtrim(s1, set));
}
