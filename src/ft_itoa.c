/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:57:15 by vraia             #+#    #+#             */
/*   Updated: 2018/10/29 11:08:47 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	check_negative(int *n, int *neg, int *i)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
		*i += 1;
	}
}

char		*ft_itoa(int n)
{
	int		i;
	int		temp;
	int		neg;
	char	*num;

	if (n == -2147483648)
		return ("-2147483648");
	neg = 0;
	i = 1;
	check_negative(&n, &neg, &i);
	temp = n;
	while (temp /= 10)
		i++;
	if (!(num = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	if (neg)
		num[0] = '-';
	num[i--] = '\0';
	num[i--] = n % 10 + '0';
	while (n /= 10)
		num[i--] = n % 10 + '0';
	return (num);
}
