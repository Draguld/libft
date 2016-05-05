//Description:
//ft_strconcat take two string and allocate an new string,
//result of concatenation of they.

//const char *s1, the first string,
//const char *s2, the second string.

//Return value:
//ft_strconcat return an string result of concatenation her argument,
//or NULL if error.

#include "libft.h"

char	*ft_strconcat(const char *s1, const char *s2)
{
	char	*res;

	res = (char *)malloc(sizeof(*res) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res != NULL)
	{
		res[ft_strlen(s1) + ft_strlen(s2)] = '\0';

		//revision de ft_strcpy et ft_strcat les fonction idententique de la libc fonctionne.

		ft_strcpy(res, s1);
		ft_strcat(res, s2);
	}
	return (res);
}
