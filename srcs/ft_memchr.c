
void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char*)s;
	i = 0;
	while(i < n)
	{
		if (str[i] == (const char)c)
			return(str + i)
		i++;
	}
	return (NULL);
}
