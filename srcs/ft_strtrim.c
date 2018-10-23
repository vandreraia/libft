/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:27:22 by vraia             #+#    #+#             */
/*   Updated: 2018/10/22 19:07:32 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	int		end;
	char	*new;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	len = strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	end = len;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	new = (char *)malloc(sizeof(char) * (len));
	if (!new)
		return (0);
	while (++i < end)
		new[++j] = s[i];
	new[++j] = '\0';
	return (new);
}
