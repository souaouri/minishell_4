/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:31:42 by souaouri          #+#    #+#             */
/*   Updated: 2024/06/05 02:03:52 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../minishell.h"

int	open_in_file(t_list **list)
{
	int	i;
	int	fd;
	
	i = 0;
	fd = 0;
	if (!(*list)->content.in_file)
	{
		return (0);
	}
	while ((*list)->content.in_file[i] && (*list)->content.in_file)
	{
		
		fd = open ((*list)->content.in_file[i], O_RDONLY | O_TRUNC , 0644);
		i++; //  sss > hhhh > kkk
	}
	return (fd);
}

int	open_out_file(t_list **list)
{
	int	i;
	int	fd;

	i = 0;
	fd = 1;
	if (!(*list)->content.out_file)
		return (1);
	while ((*list)->content.out_file[i] && (*list)->content.out_file)
	{
		fd = open ((*list)->content.out_file[i], O_CREAT | O_RDWR | O_TRUNC, 0644);
		i++;
	}
	return (fd);
}
