/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_8.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 00:51:39 by souaouri          #+#    #+#             */
/*   Updated: 2024/06/05 21:20:51 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	change_list(t_list *list)
{
	// printf ("cmd : %s\n", list->content.cmd);
	// printf ("arg : %s\n", list->content.args[0]);
	list->content.cmmd = join_cmd_arg(list->content.cmd, list->content.args);
}