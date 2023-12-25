#include "libft.h"



int main(void)
{
    t_list *root;

    root = malloc(sizeof(t_list));
    root->content = "hello";
    root->next = malloc(sizeof(t_list));
    root->next->content = "jack";
    root->next->next = NULL;

}