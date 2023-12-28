#include "libft.h"

void	rem(void *str)
{
	free(str);
}

void	*up(void *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i])
	{
		ptr[i] -= 32;
		i++;
	}
	// printf("new %s\n", ptr);
	return (ptr);
}

int	main(void)
{
	t_list *root;
	void *(*f)(void *);
	void (*del)(void *);

	char str[] = "hello";
	char str2[] = "jack";

	f = &up;
	del = &rem;
	root = malloc(sizeof(t_list));
	root->content = str;
	root->next = malloc(sizeof(t_list));
	root->next->content = str2;
	root->next->next = NULL;

	// while (root)
	// {
	printf("%p\n", ft_lstmap(root, f, del)->next->next);
	//     root = root->next;
	// }
}