#include "libft.h"

void	ffree(void *ptr)
{
	free(ptr);
}

int	main(void)
{
	t_list	*root;
	void	(*f)(void *);

	f = &ffree;
	root = malloc(sizeof(t_list));
	root->content = "hello";
	root->next = malloc(sizeof(t_list));
	root->next->content = "jack";
	root->next->next = NULL;
	ft_lstclear(&root, f);
}

// char toupp(unsigned int i, char c)
// {
//     (void)i;

//     return (c - 32);
// }

// int main()
// {
//     char (*f)(unsigned int, char);

//     f = &toupp;
//     printf("%s\n", ft_strmapi( "jack", f));
//     // printf("%c\n", f(1, 'c'));
// }