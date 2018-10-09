void ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*S)
	{
		f(s);
		s++;
	}
}
