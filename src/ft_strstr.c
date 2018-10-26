/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:27:32 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 23:06:09 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	p = (char *)malloc(1);
	while (s1[i] != s2[j] && s1[i])
		i++;
	p = (char*)&s1[i];
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (s1[i] == '\0')
			return (p);
		if (s1[i] != s2[j])
			return (0);
	}
	return (0);
}
