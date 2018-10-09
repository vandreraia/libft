char	*ft_strdup(const char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dup = (char *)malloc(sizeof(sup) * (i + 1));
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i++] = '\0';

	return (dup);
}
