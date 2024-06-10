/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:00:13 by souaouri          #+#    #+#             */
/*   Updated: 2024/06/06 03:08:15 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../minishell.h"

int	len_of_arg(char **arg)
{
	int	i;

	i = 0;
	while (arg[i])
		i++;
	return (i + 1);
}

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**join_cmd_arg(char *cmd, char **arg)
{
	int		i;
	int		j;
	char	**ptr;

	ptr = NULL;
	i = 0;
	j = 0;
	if (cmd == NULL && arg == NULL)
		return (NULL);
	else if (cmd == NULL)
		return (arg);
	else if (arg == NULL)
		return (ft_split(cmd, ' '));
	ptr = malloc(sizeof(char *) * (len_of_arg(arg) + 1));
	ptr[0] = cmd;
	i++;
	while (arg[j])
	{
		ptr[i] = arg[j];
		i++;
		j++;
	}
	ptr[i] = NULL;
	return (ptr);
}
