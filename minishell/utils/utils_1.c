#include "../minishell.h"

void	child(char *nood, char **env)
{
	char **cmmd;

	cmmd = ft_split(nood, 32);
	// dup2(nood->infile, 0);
	// dup2(nood->outfile, 1);
	// close(nood->infile);
	// close(nood->outfile);
	ft_exec(cmmd, env);
}

void	parent(char *nood, char **env)
{
	(void)env;
	(void)nood;
	wait(NULL);
}
