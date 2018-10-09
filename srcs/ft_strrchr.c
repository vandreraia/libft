char	*strrchr(const char *s, int c)
{
	while (*s)
		s++;
	while (*s != c)
		s--;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
