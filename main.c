#include "libft.h"

int main(void)
{
    t_list *root;
    t_list *new;

    root = malloc(sizeof(t_list));
    root->content = "hello";
    root->next = malloc(sizeof(t_list));
    root->next->content = "jack";
    root->next->next = NULL;

    new = malloc(sizeof(t_list));
    new->content = "joe";
    printf("from main %p\n", root);
    ft_lstadd_back(&root, new);

    while (root)
    {
        printf("%s\n", root->content);
        root = root->next;
    }
}