#include "libft.h"

void    rem(void *str)
{
    free(str);
}

void up(void *str)
{
    int i = 0;
    char *ptr = (char *)str;

    while (ptr[i])
    {
        printf("%c\n", ptr[i]);
        i++;
    }
}

int main(void)
{
    t_list *root;
    void (*f)(void *);
    void (*del)(void*);

    f = &up;
    del = &rem;
    root = malloc(sizeof(t_list));
    root->content = "hello";
    root->next = malloc(sizeof(t_list));
    root->next->content = "jack";
    root->next->next = NULL;


    printf("%s\n", ft_lstmap(root, f, del)->content);
}