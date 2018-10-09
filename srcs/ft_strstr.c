char	*strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	char *p;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return (s1);
	while (s1[i] != s2[j] && s1[i])
		i++;
	*p = s1[i];
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (s1[i] == '\0')
			return (p);
		if (s1[i] != s2[j])	
			return (0);
	}
	return (0);
}
