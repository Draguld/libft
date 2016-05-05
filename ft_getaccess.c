#include "libft.h"

//Description:
//ft_getaccess(char **path, char *cmd),
//this function test for all path string non-null if "path[i]+cmd" file exist,
//if exist she return the validate index of path array.

//Return value:
//-1 if no file access,
//i if "path[i]+cmd" is a valid file (existe and can execute).

int		ft_getaccess(char **path, char *cmd)
{
	char	*pcmd;
	for (unsigned int i = 0; path[i] != NULL; i++)
	{
		pcmd = ft_strconcat(path[i], cmd);
		if (access(pcmd, F_OK | X_OK) == 0)
		{
			free (pcmd);
			pcmd = NULL;
			return (i);
		}
		free (pcmd);
		pcmd = NULL;
	}
	return (-1);
}
