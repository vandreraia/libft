
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*xdest;
	const char	xsrc;

	i = 0;
	xdest = dest;
	xsrc = src;
	while (n > i)
	{
		xdest[i] = xsrc[i];
		i++;
	}
	return (dest);
}
