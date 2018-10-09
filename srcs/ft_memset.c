void *memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (len == 0)
		return (s);
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
