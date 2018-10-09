
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *new;

	i = ft_strlen(s1);
	i += ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	new[i] = '\0';
	return (new);
}
