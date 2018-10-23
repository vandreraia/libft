/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 08:37:20 by vraia             #+#    #+#             */
/*   Updated: 2018/10/23 10:54:44 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	wordcount(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
		}
		count++;
	}
	return (count + 1);
}

int	count(char *s, char c, int i)
{
	int count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char*) * wordcount(s, c));
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		split[j] = (char *)malloc(sizeof(char) * count(s, c, i));
		while (s[i] != c && s[i])
		{
			split[j][k++] = s[i];
			i++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = '\0';
	return (split);
}
