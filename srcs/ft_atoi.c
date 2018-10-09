int ft_atoi(const char *nptr)
{
	int i;
	int tot;
	int sign;

	sign = 1;
	i = 0;
	tot = 0;
	while (nptr[i] == ' ' || nptr [i] == '\t' || nptr[i] == '\v'
			|| nptr[i] '\n' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])	
	{
		tot = tot * 10 + nptr[i] - '0';
		i++;
	}
	tot *= sign;
	return (tot);
} 
