#include "libft.h"

char	**ft_arraydup(char **array)
{
	size_t	i;
	char	**res;

	i = 0;
	while (array[i] != NULL)
		i++;
	res = (char **)malloc (sizeof(*res) * (i + 1));
	if (res == NULL)
		return (NULL);
	for (unsigned int j = 0; j < i; j++)
		res[j] = ft_strdup(array[j]);
	res[i] = NULL;
	return (res);
}
