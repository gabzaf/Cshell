#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct s_terminal
{
	char	**envp;	
}	t_terminal;

char	*ft_strdup(const char *s);
int	ft_strlen(const char *str);

#endif
