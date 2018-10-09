
#include "libft.h"
#include <stdlib.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
