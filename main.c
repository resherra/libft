#include "libft.h"

void up(void *str)
{
    int i = 0;
    // char *ptr = (char *)str;

    while (((char *)str)[i])
    {
        printf("%c\n", ((char *)str)[i]);
        i++;
    }
}

int main(void)
{
    t_list *root;
    void (*f)(void *);

    f = &up;
    root = malloc(sizeof(t_list));
    root->content = "hello";
    root->next = malloc(sizeof(t_list));
    root->next->content = "jack";
    root->next->next = NULL;
    ft_lstiter(root, f);
}