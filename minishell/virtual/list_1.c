#include "../minishell.h"

void	__ft_initialisation(t_container	*nood)
{
	nood->cmd = ft_split("env", ' ');
	nood->infile = 0; //open ("Makefile", O_RDONLY , 0644);
	nood->outfile = 1; //open ("solimi", O_CREAT | O_RDWR | O_TRUNC, 0644);
}

void	__ft_initialisation2(t_container	*nood)
{
	nood->cmd = ft_split("cat", ' ');
	nood->infile = 0; //open ("solimi", O_RDONLY , 0644);
	nood->outfile = 1; //open ("solimi", O_CREAT | O_RDWR | O_TRUNC, 0644);
}

void	__ft_initialisation3(t_container	*nood)
{
	// int fd;
	// fd = open ("test.tgjxt", O_CREAT | O_RDONLY | 0644);
	nood->cmd = ft_split("cat", ' ');
	nood->infile = 0; //open ("solimi", O_RDONLY , 0644);
	nood->outfile = 1; //open ("tttt", O_CREAT | O_RDWR , 0644);
}

t_list	*ft_lstnew(t_container content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!*lst || !lst || !new)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

void	virtual_stack_1(t_list **list_1)
{

	t_container	__nood;
	// t_container	__nood2;
	// t_container	__nood3;

	t_list		*__new;
	// t_list		*__new2;
	// t_list		*__new3;

	__ft_initialisation(&__nood);
	// __ft_initialisation2(&__nood2);
	// __ft_initialisation3(&__nood3);

	__new = ft_lstnew(__nood);
	// __new2 = ft_lstnew(__nood2);
	// __new3 = ft_lstnew(__nood3);

	ft_lstadd_back(list_1, __new);
	// ft_lstadd_back(list_1, __new2);
	// ft_lstadd_back(list_1, __new3);

	// while (list)
	// {
	// 	printf("---> cmd : %s\n", list->content.cmd);
	// 	list = list->next; 
	// }
}