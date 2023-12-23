#include "libft.h"

int main(void)
{
    t_list *root = malloc(sizeof(t_list));
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node)
        exit(1);
    if (!root)
        exit(1);
    root->content = "hello";
    root->next = NULL;

    t_list *curr = root;

    ft_lstadd_back(&curr, new_node);

    while (curr != NULL)
    {
        printf("%s\n", curr->content);
        curr = curr->next;
    }
}

// int main()
// {
//     t_list *root, *elem;

//     root = malloc(sizeof(t_list));
//     elem = malloc(sizeof(t_list));
//     root->content = "hello";
//     root->next = elem;
//     root->next->content = "jack";
//     root->next->next = NULL;

//     printf("%d\n", ft_lstsize(root));
// }