#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
