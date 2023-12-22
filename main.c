#include "libft.h"

int main(void)
{
    char *str = "hello";
    printf("%s\n", ft_lstnew(str)->content);
}