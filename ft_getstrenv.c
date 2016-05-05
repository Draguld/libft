#include "libft.h"

//Description:
//ft_getstrenv(char **environ, char *str),
//environ is extern char **environ (man environ),
//str is the name of value for environ (man environ)

//Return value:
//return a new string (allocated with malloc) she have value of str named value
//exemple : (str = "USER=", return value = "Jean-Marc".).

char	*ft_getstrenv(char **environ, char *str)
{
	char	*buf;
	char	*ret;

	buf = NULL;
	ret = NULL;
	for (unsigned int i = 0; environ[i] != NULL; i++)
	{
		buf = ft_strstr(environ[i], str);
		if (buf != NULL)
		{
			ret = (char*)malloc(sizeof(*ret) * (ft_strlen(buf) - ft_strlen(str) + 1));
			if (ret != NULL)
			{
				ret[ft_strlen(buf) - ft_strlen(str)] = '\0';
				buf = buf + ft_strlen(str);
				ret = ft_strcpy(ret, buf);
			}
		}
	}
	return (ret);
}
