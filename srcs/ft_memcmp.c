
int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] == str2[i] && str[i] && i < n)
		i++;
	if (n == i)
		return (0);	
	return (str1[i] - str2[i]);
}
