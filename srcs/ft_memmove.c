
void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (src > dest);
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dest);
}
