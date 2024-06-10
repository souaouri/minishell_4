/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:54:18 by souaouri          #+#    #+#             */
/*   Updated: 2024/06/08 20:31:48 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_initialisation(t_container	*nood)
{
	nood->cmd = ""; //"export";
	nood->args = ft_split("", ' ');
	nood->infile = -2;//open ("Makefile", O_RDONLY , 0644);
	nood->outfile = -2; //open ("solimi", O_CREAT | O_RDWR | O_TRUNC, 0644);
}

void	ft_initialisation2(t_container	*nood)
{
	nood->cmd = "wc";
	nood->args = ft_split("-l", ' ');
	nood->infile = 0; //open ("Makefile", O_RDONLY , 0644);
	nood->outfile = 1; //open ("Makefile", O_CREAT | O_RDWR | O_TRUNC, 0644);
}

void	ft_initialisation3(t_container	*nood)
{
	// int fd;
	// fd = open ("test.tgjxt", O_CREAT | O_RDONLY | 0644);
	nood->cmd = "cat";
	nood->out_file = NULL ; //ft_split("souaouri", ' ');
	nood->in_file = NULL ; //ft_split("solimi", ' ');
	// nood->infile = 0; //open ("solimi", O_RDONLY , 0644);
	// nood->outfile = 1; //open ("tttt", O_CREAT | O_RDWR , 0644);
}

void	ft_initialisation4(t_container	*nood)
{
	// int fd;
	// fd = open ("test.tgjxt", O_CREAT | O_RDONLY | 0644);
	nood->cmd = "cat";
	nood->infile = 0; //open ("solimi", O_RDONLY , 0644);
	nood->outfile = 1; //open ("tttt", O_CREAT | O_RDWR , 0644);
}

void	ft_initialisation5(t_container	*nood)
{
	// int fd;
	// fd = open ("test.tgjxt", O_CREAT | O_RDONLY | 0644);
	nood->cmd = "cat";
	nood->infile = 0;//open ("solimi", O_RDONLY , 0644);
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

void	virtual_stack(t_list **list)
{
	t_container	nood;
	// t_container	nood2;
	// t_container	nood3;
	// t_container	nood4;
	// t_container	nood5;
	t_list		*new;
	// t_list		*new2;
	// t_list		*new3;
	// t_list		*new4;
	// t_list		*new5;

	ft_initialisation(&nood);
	// ft_initialisation2(&nood2);
	// ft_initialisation3(&nood3);
	// ft_initialisation4(&nood4);
	// ft_initialisation5(&nood5);

	new = ft_lstnew(nood);
	// new2 = ft_lstnew(nood2);
	// new3 = ft_lstnew(nood3);
	// new4 = ft_lstnew(nood4);
	// new5 = ft_lstnew(nood5);

	ft_lstadd_back(list, new);
	// ft_lstadd_back(list, new2);
	// ft_lstadd_back(list, new3);
	// ft_lstadd_back(list, new4);
	// ft_lstadd_back(list, new5);
	// while (list)
	// {
	// 	printf("---> cmd : %s\n", list->content.cmd);
	// 	list = list->next; 
	// }
}