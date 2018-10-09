char *strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (*s != c)
		s++;
	if (*s == c)
		return (*s);
	else
		return (NULL);
}
