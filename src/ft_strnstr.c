/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:51:04 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 23:09:06 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	int j;
	const char *p;

	j = 0;
	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != s2[j] && s1[i] && i < len)
		i++;
	p = &s1[i];
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (s1[i] == '\0')	
			return ((char*)p);
		if (s1[i] != s2[j])
			return (0);
	}
	return (0);
}
