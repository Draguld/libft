#include "libft.h"

char	*ft_strapp(char *s, char c)
{
	char 	*r;
	int		i;
	
	r = (char *)malloc(sizeof(*r) * ft_strlen(s) + 2);
	i = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	r[i++] = c;
	r[i] = '\0';
	return (r);
}
