
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	chat *str;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
