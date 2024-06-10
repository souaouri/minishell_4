/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 00:35:32 by souaouri          #+#    #+#             */
/*   Updated: 2024/05/17 00:35:32 by souaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <readline/readline.h>

typedef struct container
{
	char				*cmd;
	char				**cmmd;
	char 				**args; // cat sss > hhh > hhh
	char				**in_file;
	char				**out_file;
	int					infile;
	int					outfile;
}						t_container;

typedef struct list
{
	t_container	content;
	struct list	*next;
}			t_list;

typedef struct env
{
	char		*content;
	struct env	*next;
}			t_env;

// virtual
void	virtual_stack(t_list **list);
void	virtual_stack_1(t_list **list_1);

// travl
void	ft_fork(char *nood, t_env *list_env);
int		ft_strlen_1(char **ptr);
void	putstr(char *str, int i);
void	echo(char **cmd);
void	classification_cmd(t_env *env, char **nood);
void	ft_exec(char **cmd, char **env);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *s);
void	*free_double_ptr(char	**ptr);
void	child(char *nood, char **env);
void	parent(char *nood, char **env);
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_check(char *cmd, char **env);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strchr(char *s, int c);
char	*ft_find_path(char **env);
void	ft_find_pwd(void);
t_env	*get_env(char **env);
void	get_cd(char *cmd);
void	export(char **cmd, t_env *list_env);
void	ft_putstr_fd(char *s, int fd);
void	write_env(t_env *env);
char	**change_list_to_env(t_env *list_env);
int		ft_lstsize(t_env *lst);
int		ft_lstsize_1(t_list *lst);
void	multiple_cmd(t_env *env_list, t_list *list);
t_env	*ft_lstnew_env(char *line);
void	ft_lstadd_back_env(t_env **lst, t_env *new);
void	change_list(t_list *list);
char	**join_cmd_arg(char *cmd, char **arg);

#endif