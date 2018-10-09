void *memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		xdest;
	const char xsrc;

	i = 0;
	xdest = dest;
	xsrc = src;
	while (i < n)
	{
		xdest[i] = xsrc[i];
		if (xdest[i] == (char)c)
			return((void*)dest + i + 1);
		i++;
	}
	return (NULL);
}
